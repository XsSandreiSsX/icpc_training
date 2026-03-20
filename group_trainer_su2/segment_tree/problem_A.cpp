#include <iostream>

using namespace std;

const int MAXN = 100005;

long long arr[MAXN];
long long t[MAXN * 4];

void build(int v, int tl, int tr) {
    if (tl > tr) return;

    if (tr == tl) {
        t[v] = arr[tl];
        return;
    }

    int tm = (tl + tr) / 2;

    build(v + v, tl, tm);
    build(v + v + 1, tm + 1, tr);

    t[v] = t[v + v] + t[v + v + 1];
}

long long get_sum(int v, int tl, int tr, int l, int r) {
    if (l > r) return 0LL;

    if (tl == l && tr == r) {
        return t[v];
    }

    int tm = (tl + tr) / 2;

    return get_sum(v+v, tl, tm, l, min(tm, r)) + 
    get_sum(v+v+1, tm+1, tr, max(tm+1, l), r);
}
    

void update(int v, int tl, int tr, int pos, long long val) {
    if (tl > tr) return;

    if (tl == pos && tr == pos) {
        t[v] = val;
        return;
    }

    int tm = (tl + tr) / 2;

    if (pos <= tm) {
        update(v+v, tl, tm, pos, val);

    } else {
        update(v+v+1, tm+1, tr, pos, val);
    }

    t[v] = t[v+v] + t[v+v+1];
}

int main() {
    freopen("sum.in", "r", stdin);
    freopen("sum.out", "w", stdout);
    int n, k; cin >> n >> k;

    while(k--) {
        char type; cin >> type;

        if (type == 'A') {
            int pos, val; cin >> pos >> val;
            update(1, 1, n, pos, val);
        } else {
            int l, r; cin >> l >> r;
            cout << get_sum(1, 1, n, l, r) << "\n";

        }
    }
    
    return 0;
}