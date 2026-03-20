#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

const int MAXN = 9999 + 1;

bool was[MAXN];
int dist[MAXN];
queue <int> q;

int change_num(int num, int oper) {
    int a = num / 1000;
    int b = (num / 100) % 10;
    int c = (num / 10) % 10;
    int d = num % 10;

    if (oper == 0 && a != 9) a++;
    else if (oper == 1 && d != 1) d--;
    else if (oper == 2) return 1000 * d + 100 * a + 10 * b + c;
    else if (oper == 3) return 1000 * b + 100 * c + 10 * d + a;

    return 1000 * a + 100 * b + 10 * c + d;

}

int main() {
    int start, end; cin >> start >> end;

    for (int i = 1000; i < MAXN; i++) {
        dist[i] = -1;
    }

    was[start] = true;
    dist[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int num = q.front();
        q.pop();

        if (num == end) {
            cout << dist[num] << "\n";
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            int nnum = change_num(num, i);

            if (!was[nnum]) {
                was[nnum] = true;
                dist[nnum] = dist[num] + 1;
                q.push(nnum);
            }
        }
    }
    
    return 0;
}