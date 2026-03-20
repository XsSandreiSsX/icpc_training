#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

const int MAXN = 100005;
 
long long arr[MAXN];
int block_num[MAXN];
int block_start[MAXN];
long long block_sum[MAXN];
long long block_min[MAXN];
long long block_max[MAXN];

long long add[MAXN];

int main() {
    IOS;
    int n, q; cin >> n >> q;

    int len = sqrt(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        block_num[i] = i / len;
        block_start[block_num[i]] = block_num[i] * len;
        block_sum[block_num[i]] += arr[i];

        if (block_start[block_num[i]] == i) {
            block_min[block_num[i]] = arr[i];
            block_max[block_num[i]] = arr[i];
        } else {
            block_min[block_num[i]] = min(block_min[block_num[i]], arr[i]);
            block_max[block_num[i]] = max(block_max[block_num[i]], arr[i]);
        }

        // cout << block_num[i] << "th cur block sum: " << block_max[block_num[i]] << "\n";
        
    }

    while (q--) {
        int type, l, r; cin >> type >> l >> r;
        l--; r--;

        if (type == 1) {
            
            long long answer = 0;
            int i = l;
            while (i <= r) {
                if (block_start[block_num[i]] == i && i + len - 1 <= r) {
                    answer += block_sum[block_num[i]];
                    // cout << "+=sum of block: " << block_sum[block_num[i]] << "\n"; 
                    i += len;
                } else {
                    answer += arr[i] + add[block_num[i]];
                    // cout << "+=elem: " << arr[i] << " +lazy add: " << add[block_num[i]] << "\n";
                    i += 1;
                }

            }

            cout << answer << "\n";
        } else {
            long long mmin = LLONG_MAX;
            long long mmax = LLONG_MIN;
            
            int i = l;
            while (i <= r) {
                if (block_start[block_num[i]] == i && i + len - 1 <= r) {
                    mmin = min(mmin, block_min[block_num[i]]);
                    mmax = max(mmax, block_max[block_num[i]]);
                    i += len;
                } else {
                    mmin = min(mmin, arr[i] + add[block_num[i]]);
                    mmax = max(mmax, arr[i] + add[block_num[i]]);
                    i++;
                }
            }
            
            // cout << "Min on range: " << mmin << "\n";
            // cout << "Max on range: " << mmax << "\n";
            
            if (mmax + mmin >= 1e12) {
                cout << 0 << "\n";
                continue;
            }

            i = l;
            while (i <= r) {
                if (block_start[block_num[i]] == i && i + len - 1 <= r) {
                    block_sum[block_num[i]] += mmin * min(n - block_start[block_num[i]], len);
                    block_max[block_num[i]] += mmin;
                    block_min[block_num[i]] += mmin;
                    add[block_num[i]] += mmin;
                    i += len;
                } else {
                    block_sum[block_num[i]] += mmin;
                    arr[i] += mmin;
                    i++;
                }
            }

            block_min[block_num[l]] = LLONG_MAX;
            block_max[block_num[l]] = LLONG_MIN;
            block_min[block_num[r]] = LLONG_MAX;
            block_max[block_num[r]] = LLONG_MIN;

            int cur_start = block_start[block_num[l]];
            for (int i = cur_start; i < min(n, cur_start + len); i++) {
                block_min[block_num[l]] = min(arr[i] + add[block_num[l]], block_min[block_num[l]]);
                block_max[block_num[l]] = max(arr[i] + add[block_num[l]], block_max[block_num[l]]);

            }
            
            cur_start = block_start[block_num[r]];
            for (int i = cur_start; i < min(n, cur_start + len); i++) {
                block_min[block_num[r]] = min(arr[i] + add[block_num[r]], block_min[block_num[r]]);
                block_max[block_num[r]] = max(arr[i] + add[block_num[r]], block_max[block_num[r]]);
            }

            cout << 1 << "\n";
        }
    }

    return 0;
}