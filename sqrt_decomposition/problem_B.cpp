#include <iostream>
#include <cmath>

using namespace std;

const int MAXN = 100005;

long long arr[MAXN];
int block_num[MAXN];
bool start_block[MAXN];
long long blck_sum[MAXN];

long long blck_add[MAXN];
long long lazy_add[MAXN];

int main() {
    int n, q; cin >> n >> q;

    int len = sqrt(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        block_num[i] = i / len;
        start_block[i] = (i % len == 0);
        blck_sum[block_num[i]] += arr[i];
    }

    while(q--) {
        int type; cin >> type;
        if (type == 1) {
            int l, r; cin >> l >> r;
            l--; r--;

            long long ans = 0;

            int i = l;
            while (i <= r) {
                if (start_block[i] && i + len - 1 <= r) {
                    ans += (blck_sum[block_num[i]] + blck_add[block_num[i]]);
                    i += len;
                } else {
                    ans =+ (arr[i] + lazy_add[i]); 
                    i += 1;
                }
            }

            cout << ans << "\n";

        } else {
            int l, r; cin >> l >> r;
            l--; r--;
            long long x; cin >> x;
            
            int i = l;
            while(i <= r) {
                
                if (start_block[i] && i + len - 1 <= r) {
                    blck_sum[block_num[i]] += x;
                    i += len;
                } else  i += 1;
                lazy_add[i] += x;
            }
        }
    }


    return 0;
}