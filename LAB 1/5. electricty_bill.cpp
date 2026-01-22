//electicity bill based on units consumed
#include <iostream>
using namespace std;
int main() {
    int units;
    double billAmount;

    cout << "Enter the number of electricity units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid input! Please enter a non-negative value for units." << endl;
        return 1;
    }

    if (units <= 100) {
        billAmount = units * 0.5; 
    } 
    else if (units <= 300) {
        billAmount = (100 * 0.5) + ((units - 100) * 0.75); 
    } 
    else {
        billAmount = (100 * 0.5) + (200 * 0.75) + ((units - 300) * 1.2); 
    }

    cout << "Total electricity bill: " << billAmount << endl;
    return 0;
}