#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1005;

long long arr[MAXN];
long long t[4 * MAXN];

void build(int v, int tl, int tr) {
    if (tl > tr) return;

    if (tl == tr) {
        t[v] = arr[tl];
        return;
    }

    int tm = (tl + tr) / 2;
    build(v+v, tl, tm);
    build(v+v+1, tm+1, tr);
    t[v] = min(t[v+v], t[v+v+1]);
    
}

long long get_min(int v, int tl, int tr, int l, int r) {
    if (l > r) return INT_MAX;

    if (tl == l && tr == r) {
        return t[v];
    }

    int tm = (tl + tr) / 2;

    return min(get_min(v+v, tl, tm, l, min(tm, r)),
               get_min(v+v+1, tm+1, tr, max(tm+1, l), r));
}

int main() {
    freopen("stupid_rmq.in", "r", stdin);
    freopen("stupid_rmq.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    build(1, 1, n);

    int m; cin >> m;
    while (m--) {
        int l, r; cin >> l >> r;
        cout << get_min(1, 1, n, l, r) << "\n";
    }
    return 0;
}