#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100005;

vector <pair <int, int>> quests;
int arr[MAXN];
vector <int> t_min(4 * MAXN);
vector <int> t_max(4 * MAXN);

void build(vector<int>& t, bool type, int v, int tl, int tr) {
    if (tl > tr) return;

    if (tl == tr) {
        t[v] = arr[tl];
        return; 
    }

    int tm = (tl + tr) / 2;
    build(t, type, v+v, tl, tm);
    build(t, type, v+v+1, tm+1, tr);

    if (type) {
        t[v] = max(t[v+v], t[v+v+1]);
    } else {
        t[v] = min(t[v+v], t[v+v+1]);
    }
}

void update(vector<int>& t, bool type, int v, int tl, int tr, int pos, int val) {
    if (tl > tr) return;

    if (tl == pos && tr == pos) {
        t[v] = val;
        return;
    }

    int tm = (tl + tr) / 2;

    if (pos <= tm) {
        update(t, type, v+v, tl, tm, pos, val);
    } else {
        update(t, type, v+v+1, tm+1, tr, pos, val);
    }

    if (type) {
        t[v] = max(t[v+v], t[v+v+1]);
    } else {
        t[v] = min(t[v+v], t[v+v+1]);
    }
}

int get_num(vector<int> &t, bool type, int v, int tl, int tr, int l, int r) {
    if (l > r) {
        if (type) {
            return INT_MIN;
        } else {
            return INT_MAX;
        }
    }

    if (tl == l && tr == r) {
        return t[v];
    }


    int tm = (tl + tr) / 2;
    if (type) {
        return max(get_num(t, type, v+v, tl, tm, l, min(tm, r)),
                   get_num(t, type, v+v+1, tm+1, tr, max(tm+1, l), r));
    } else {
        return min(get_num(t, type, v+v, tl, tm, l, min(tm, r)),
                   get_num(t, type, v+v+1, tm+1, tr, max(tm+1, l), r));

    }
}

int main() {
    freopen("rvq.in", "r", stdin);
    freopen("rvq.out", "w", stdout);
    int q; cin >> q;

    for (int i = 0; i < q; i++) {
        int x, y; cin >> x >> y;
        quests.push_back({x, y});
    }

    int n = -1;

    for (int i = 0; i < q; i++) {
        if (quests[i].first >= 1) {
            if (quests[i].second > n) {
                n = quests[i].second;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        arr[i] = (1LL * i * i) % 12345 + (1LL * i * i * i) % 23456;
    }

    build(t_max, true, 1, 1, n);
    build(t_min, false, 1, 1, n);

    for (int i = 0; i < q; i++) {
        int x = quests[i].first;
        int y = quests[i].second;

        if (x >= 1) {
            cout << get_num(t_max, true, 1, 1, n, x, y) - get_num(t_min, false, 1, 1, n, x, y) << "\n";
        } else {
            update(t_max, true, 1, 1, n, abs(x), y);
            update(t_min, false, 1, 1, n, abs(x), y);
        }

    }

    return 0;
}