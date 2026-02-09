#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long start, end; cin >> start >> end;
    vector <long long> prev = {end};
    
    while (end > start) {
        if (end % 2 == 0) {
            end /= 2;
        } else if (end % 10 == 1){
            end /= 10;
        } else {
            break;
        }
        prev.push_back(end);
    }

    reverse(prev.begin(), prev.end());

    if (prev.front() != start) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    cout << prev.size() << "\n";
    for (long long n : prev) {
        cout << n << " ";
    }

}