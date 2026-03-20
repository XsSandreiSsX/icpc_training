#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int arr[MAXN];
int num_block[MAXN];
int start_block[MAXN];
long long blocks[MAXN];
long long k[MAXN];
long long b[MAXN];

int main() {
    int n, q; cin >> n >> q;

    int len = sqrt(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        num_block[i] = i / len;
        start_block[num_block[i]] = num_block[i] * len;
        blocks[num_block[i]] += arr[i];
    }

    while(q--) {
        int type, l, r; cin >> type >> l >> r;
        l--; r--;

        if (type == 1) {
            long long answer = 0;
            int i = l;
            while (i <= r) {
                if (start_block[num_block[i]] == i && i + len - 1 <= r) {
                    answer += blocks[num_block[i]];
                    i += len;
                }
                else {
                    answer += arr[i] + k[num_block[i]] * (i - start_block[num_block[i]]) + b[num_block[i]];
                    i += 1;
                }

            }

            cout << answer << "\n";

        } else {

            int i = l;
            int cur_num = 1;
            while (i <= r) {
                if (start_block[num_block[i]] == i && i + len - 1 <= r) {
                    k[num_block[i]]++;
                    b[num_block[i]] += cur_num;
                    blocks[num_block[i]] += (cur_num + (cur_num + len - 1)) * len / 2;
                    i += len; cur_num += len;
                } else {
                    arr[i] += cur_num;
                    blocks[num_block[i]] += cur_num;
                    i++; cur_num++;
                }
            }
        }

    }


    return 0;
}