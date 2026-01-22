//Triangle types
#include <iostream>
using namespace std;
int main() {
    float s1, s2, s3;
    cout << "Enter the 3 sides of a triangle: ";
    cin >> s1 >> s2 >> s3;
    if ((s1 + s2) > s3 && (s2 + s3) > s1 && (s3 + s1) > s2)
    {
        if ((s1 == s2) && (s2 == s3) && (s3 == s1))
            cout << "Triangle is Equilateral";
        else if ((s1 == s2) || (s2 == s3) || (s3 == s1))
            cout << "Triangle is Isosceles";
        else
            cout << "Triangle is Scalene";
    }
    else
        cout << "Invalid Triangle Sides";
    return 0;
}