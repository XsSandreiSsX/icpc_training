#include <iostream>

using namespace std;

const int MAXN = 101;

void solve() {
    int n; cin >> n;
    int arr[MAXN];

    int mmax = -1;
    int mmin = 101;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mmax = max(mmax, arr[i]);
        mmin = min(mmin, arr[i]);
    }

    int pr =;




    
    

    
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}