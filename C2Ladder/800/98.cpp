#include <iostream>

using namespace std;

const int MAXN = 101;

void solve() {
    int n, l; cin >> n >> l;
    int arr[MAXN];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = 0;
    
    for (int bit = 0; bit < l; bit++) {
        int tr = 0;
        int fl = 0;

        for (int j = 0; j < n; j++) {
            if ((arr[j] >> bit) & 1) tr++;
            else fl++;
        }

        answer |= ((tr > fl) << bit); 
    }

    cout << answer << "\n";
    
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}