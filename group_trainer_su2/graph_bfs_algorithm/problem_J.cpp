#include <iostream>
#include <set>
#include <map>
#include <queue>
using namespace std;

queue <pair <long long, long long>> q;
set <pair <long long, long long>> allowed;
map <pair<long long, long long>, int> dist;

int dx[] = {-1, 0, 1, -1, 0, 1, -1, 1};
int dy[] = {1, 1, 1, -1, -1, -1, 0, 0};

int main() {
    long long x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int n; cin >> n;
    while (n--) {
        long long r, a, b; cin >> r >> a >> b;
        for (long long c = a; c <= b; c++) {
            allowed.insert({r, c});
        }
    }

    dist[{x1, y1}] = 0;
    q.push({x1, y1});

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 8; i++) {
            long long tox = x + dx[i];
            long long toy = y + dy[i];

            if (allowed.find({tox, toy}) == allowed.end()) continue;

            if (dist.find({tox, toy}) == dist.end()) {
                dist[{tox, toy}] = dist[{x, y}] + 1;
                q.push({tox, toy});
            }

        }

    }

    if (dist.find({x2, y2}) == dist.end()) {
        cout << -1 << "\n";
        return 0;
    }

    cout << dist[{x2, y2}] << "\n";

    return 0;
}