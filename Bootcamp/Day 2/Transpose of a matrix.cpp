#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int a[10][10], t[10][10];

    // input matrix
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> a[i][j];
        }
    }

    // Transpose
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            t[j][i] = a[i][j];     // main step
        }
    }

    // printing the transpose matrixx
    cout << "Transpose matrix:\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
