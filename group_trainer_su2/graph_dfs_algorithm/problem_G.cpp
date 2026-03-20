#include <iostream>

using namespace std;

int main() {
    int start, end; cin >> start >> end;

    int cnt = 0;
    while (end > start) {
        if (end % 2 == 0) end /= 2;
        else end++;

        cnt++;
    }

    cnt += start - end;

    cout << cnt << "\n";

    return 0;
}