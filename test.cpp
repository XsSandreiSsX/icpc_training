// 5 Подсчитать количество элементов, больших заданного числа X.
#include <iostream>

int arr[3][3];

using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    while (true) {
        int i, j; cin >> i >> j;
        cout << arr[i][j] << "\n";
    }


    return 0;
}
