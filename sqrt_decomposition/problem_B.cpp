#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

const int MAXN = 100005;
long long arr[MAXN];
int block_num[MAXN];
int block_start[MAXN];
long long blocks[MAXN];
long long add[MAXN];
int main() {
    //IOS;
    int n, q; cin >> n >> q;

    int len = sqrt(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        block_num[i] = i / len;
        block_start[block_num[i]] = block_num[i] * len;
        
        if (block_start[block_num[i]] == i) {
            blocks[block_num[i]] = arr[i];
        } else {
            blocks[block_num[i]] = max(blocks[block_num[i]], arr[i]);
        }
    }

    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            int l, r; cin >> l >> r;
            l--; r--;

            long long mmax = LLONG_MIN;
            int i = l;
            while (i <= r) {
                if (block_start[block_num[i]] == i && i + len - 1 <= r) {
                    mmax = max(blocks[block_num[i]] + add[block_num[i]], mmax);
                    i += len;

                } else {
                    mmax = max(arr[i] + add[block_num[i]], mmax);
                    i += 1;
                }
            }

            cout << mmax << "\n";

        } else {
            int l, r; cin >> l >> r;
            l--; r--;
            long long val; cin >> val;
            int i = l;
            while (i <= r) {
                if (block_start[block_num[i]] == i && i + len - 1 <= r) {
                    add[block_num[i]] += val;
                    i += len;
                } else {
                    arr[i] += val;
                    i += 1;
                }
            }
            
            blocks[block_num[l]] = LLONG_MIN;
            int cur_start = block_start[block_num[l]];
            for (int i = cur_start; i < min(n, cur_start + len); i++) {
                blocks[block_num[i]] = max(blocks[block_num[i]], arr[i]);

                
            }

            blocks[block_num[r]] = LLONG_MIN;
            cur_start = block_start[block_num[r]];
            for (int i = cur_start; i < min(n, cur_start + len); i++) {
                blocks[block_num[i]] = max(blocks[block_num[i]], arr[i]);

                
            }


        } 

    }


    return 0;
}
