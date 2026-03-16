#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

vector <int> t;
vector <int> arr;

void build(int v, int tl, int tr, int type) {
    if (tl > tr) return;

    if (tl == tr) {
        t[v] = arr[tl];
        return;
    }

    int tm = (tl + tr) / 2;
    build(v+v, tl, tm, type ^ 1);
    build(v+v+1, tm+1, tr, type ^ 1);

    if (type == 1) {
        t[v] = t[v+v] ^ t[v+v+1];
    } else {
        t[v] = t[v+v] | t[v+v+1];
    }
}

void update(int v, int tl, int tr, int pos, int val, int type) {
    if (tl > tr) return;

    if (tl == pos && tr == pos) {
        t[v] = val;
        return;
    }

    int tm = (tl + tr) / 2;

    if (pos <= tm) {
        update(v+v, tl, tm, pos, val, type ^ 1);
    } else {
        update(v+v+1, tm+1, tr, pos, val, type ^ 1);
    }

    if (type == 1) {
        t[v] = t[v+v] ^ t[v+v+1];
    } else {
        t[v] = t[v+v] | t[v+v+1];
    }

}

int main() {
    IOS;
    int n, m; cin >> n >> m;
    int size = 1 << n;

    bool rtype;
    if (n % 2 == 0) rtype = 1;
    else rtype = 0;

    arr.resize(size + 1);
    t.resize(4 * size +1);

    for (int i = 1; i <= size; i++) {
        cin >> arr[i];
    }

    build(1, 1, size, rtype);

    while(m--) {
        int pos, val; cin >> pos >> val;
        update(1, 1, size, pos, val, rtype);
        cout << t[1] << "\n";
    }
    
    
    return 0;
}