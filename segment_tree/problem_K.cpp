#include <iostream>
#include <vector>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Vertex {
    int full;
    int left;
    int right;
};

string s;
vector <Vertex> t;

Vertex merge(Vertex a, Vertex b) {
    Vertex res;
    int m = min(a.left, b.right);
    res.full = a.full + b.full + m * 2;
    res.left = a.left + b.left - m;
    res.right = a.right + b.right - m;
    return res;
}

void build(int v, int tl, int tr) {
    if (tl > tr) return;

    if (tl == tr) {
        char cur = s[tr];
        if (cur == '(') {
            t[v].left = 1;
        } else {
            t[v].right = 1;
        }

        return;
    }

    int tm = (tl + tr) / 2;
    build(v+v, tl, tm);
    build(v+v+1, tm+1, tr);

    t[v] = merge(t[v+v], t[v+v+1]); 
}

Vertex get_v(int v, int tl, int tr, int l, int r) {
    if (l > r) return Vertex();

    if (tl == l && tr == r) return t[v];

    int tm = (tl + tr) / 2;

    Vertex vleft = get_v(v+v, tl, tm, l, min(tm, r));
    Vertex vright = get_v(v+v+1, tm+1, tr, max(tm+1, l), r);

    return merge(vleft, vright);

}

int main() {
    IOS;
    cin >> s;
    int n = s.size();
    s = "#" + s;

    t.resize(4 * n);
    build(1, 1, n);

    int m; cin >> m;
    while (m--) {
        int l, r; cin >> l >> r;
        cout << get_v(1, 1, n, l, r).full << "\n";

    }
     

    return 0;
}