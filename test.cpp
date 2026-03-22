#include <iostream>
#include <vector>

using namespace std;

pair<int, int> MatrixArgMax(const vector <vector <int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    int mmax = matrix[0][0];
    pair indx = {0, 0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > mmax) {
                mmax = matrix[i][j];
                indx = {i, j};
            }
        }
    }
    return indx;
}

int main() {
    int n, m; cin >> n >> m;
    vector <vector <int>> matrix;
    matrix.resize(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
   
    pair elem = MatrixArgMax(matrix);
    cout << elem.first << " " << elem.second << "\n";
    return 0;
}