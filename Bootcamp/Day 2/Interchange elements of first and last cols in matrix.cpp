#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int a[50][50];

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> a[i][j];

    for (int i = 0; i < rows; ++i) {
        int temp = a[i][0];
        a[i][0] = a[i][cols - 1];
        a[i][cols - 1] = temp;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
