#include <iostream>

using namespace std;

const int MAXN = 100005;

long long t[4 * MAXN];
long long rep[4 * MAXN];

void push(int v, int tl, int tr) {
    if (rep[v] != -1) {
        int tm = (tl + tr) / 2;

        t[v+v] = rep[v] * (tm - tl + 1);
        t[v+v+1] = rep[v] * (tr - tm);

        rep[v+v] = rep[v];
        rep[v+v+1] = rep[v];
        rep[v] = -1;
    }
}

void update(int v, int tl, int tr, int l, int r, long long val) {
    if (l > r) return;

    if (tl == l && tr == r) {
        t[v] = val * (tr - tl + 1);
        rep[v] = val;
        return;
    }

    push(v, tl, tr);

    int tm = (tl + tr) / 2;
    update(v+v, tl, tm, l, min(tm, r), val);
    update(v+v+1, tm+1, tr, max(tm+1, l), r, val);
    t[v] = t[v+v] + t[v+v+1]; 
}

long long get_sum(int v, int tl, int tr, int l, int r) {
    if (l > r) return 0;

    if (tl == l && tr == r) return t[v];

    push(v, tl, tr);
    int tm = (tl + tr) / 2;

    return get_sum(v+v, tl, tm, l, min(tm, r)) + get_sum(v+v+1, tm+1, tr, max(tm+1, l), r); 
}

int main() {
    freopen("sum.in", "r", stdin);
    freopen("sum.out", "w", stdout);
    int n, k; cin >> n >> k;

    for (int i = 1; i <= 4 * MAXN; i++) {
        rep[i] = -1;
    }

    while(k--) {
        char type; cin >> type;
        int l, r; cin >> l >> r;
        if (type == 'A') {
            long long val; cin >> val;
            update(1, 1, n, l, r, val);
        } else {
            cout << get_sum(1, 1, n, l, r) << "\n";
        }
    }
    return 0;
}