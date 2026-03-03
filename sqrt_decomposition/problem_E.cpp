#include <iostream>
#include <cmath>

using namespace std;

const int MAXN = 100005;

unsigned long long arr[MAXN];
int block_num[MAXN];
bool block_start[MAXN];
unsigned long long blck_and[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n >> q;

    int len = sqrt(n);
    for (int i = 0; i < (n + len - 1) / len; i++) {
        blck_and[i] = ~0ULL;
    }

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        block_num[i] = i / len;
        block_start[i] = (i % len == 0);
        blck_and[block_num[i]] &= arr[i];
    }

    while (q--) {
        int l, r; cin >> l >> r;
        l--; r--;

        unsigned long long ans = ~0ULL;
        
        int i = l;
        while(i <= r) {
            if (block_start[i] && i + len - 1 <= r) {
                ans &= blck_and[block_num[i]];
                i += len;
            } else {
                ans &= arr[i];
                i += 1;
            }
        }

        if (ans) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

    }

    return 0;
}