#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int a[50][50];

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> a[i][j];

    for (int j = 0; j < cols; ++j) {
        int temp = a[0][j];
        a[0][j] = a[rows - 1][j];
        a[rows - 1][j] = temp;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
