#include <iostream>
#include <cmath>

using namespace std;

const int MAXN = 100001;

long long arr[MAXN];
bool block_start[MAXN];
int block_num[MAXN];
long long blocks[MAXN];

int main() {
    // https://www.youtube.com/watch?v=bF1FmYhbph4 <- Ускорение мозга
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n >> q;

    int len = sqrt(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        block_num[i] = i / len;
        block_start[i] = (i % len == 0);
        blocks[block_num[i]] += arr[i];
    }

    while(q--) {
        int type; cin >> type;
        if (type == 1) {
            int l, r; cin >> l >> r;
            l--; r--;
            long long ans = 0;
            int i = l;
            while (i <= r) {
                if (block_start[i] && i + len - 1 <= r) {
                    ans += blocks[block_num[i]];
                    i += len;
                } else {
                    ans += arr[i];
                    i++;
                }
            }
            cout << ans << "\n";
        } else {
            int pos; cin >> pos;
            long long x; cin >> x;
            pos--;

            blocks[block_num[pos]] -= arr[pos];
            arr[pos] = x; 
            blocks[block_num[pos]] += x;
        }
    }

    return 0;
}