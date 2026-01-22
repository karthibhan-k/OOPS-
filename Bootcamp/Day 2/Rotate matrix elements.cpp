#include <iostream>
using namespace std;

void rotateMatrix(int m, int n, int a[100][100]) 
{
    int row = 0, col = 0;
    int prev, curr;

    while (row < m && col < n) 
    {
        
        if (row + 1 == m || col + 1 == n)
            break;

        
        prev = a[row + 1][col];

        
        for (int i = col; i < n; ++i) {
            curr = a[row][i];
            a[row][i] = prev;
            prev = curr;
        }
        row++;

        
        for (int i = row; i < m; ++i) {
            curr = a[i][n - 1];
            a[i][n - 1] = prev;
            prev = curr;
        }
        n--;


        if (row < m) {
            for (int i = n - 1; i >= col; --i) {
                curr = a[m - 1][i];
                a[m - 1][i] = prev;
                prev = curr;
            }
        }
        m--;

        
        if (col < n) {
            for (int i = m - 1; i >= row; --i) {
                curr = a[i][col];
                a[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
}

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> a[i][j];

    rotateMatrix(r, c, a);

    cout << "Matrix after rotating elements:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
