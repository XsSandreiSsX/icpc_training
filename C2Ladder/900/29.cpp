#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n; cin >> n;
    vector <long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int indx = -1;
    long long mmax = -1;
    for (int i = 0; i < n - 1; i++) {
        if (abs(arr[i] - arr[i + 1]) != 0) {
            if (arr[i] > mmax) {
                mmax = arr[i];
                indx = i+1;    
            }
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (abs(arr[i] - arr[i - 1]) != 0) {
            if (arr[i] > mmax) {
                mmax = arr[i];
                indx = i+1;    
            }
        }
    }

    cout << indx << "\n";
    
    

}

int main() {
    //IOS;
    int t; cin >> t;
    //int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}