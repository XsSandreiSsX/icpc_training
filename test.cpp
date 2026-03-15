#include <iostream> 
#include <vector>

using namespace std;

vector <int> arr;

void bubleSort(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int number; cin >> number;
        arr.push_back(number);        
    }

    bubleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}