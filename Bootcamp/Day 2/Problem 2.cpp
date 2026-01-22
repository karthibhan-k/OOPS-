//intialise array and print it
#include <iostream>
using namespace std;

int main() {
    const int rows=6;
    const int cols=6;
    int a[rows] [cols];

    for(int i=0; i<rows; i++)
    {
        for(int j=0;j<cols;++j)
     {   a[i][j]=i+j;
     }
    }

    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<cols; ++j)
        {
            cout<< a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}