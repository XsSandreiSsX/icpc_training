#include <iostream>

using namespace std;

const int MAXN = 51;

long long arr[MAXN];

void solve() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long mmin = arr[0];
    long long mmax = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < mmin) {
            mmin = arr[i];
        }

        if (arr[i] > mmax) {
            mmax = arr[i];
        }
    }

    cout << mmax - mmin << "\n";
    

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}