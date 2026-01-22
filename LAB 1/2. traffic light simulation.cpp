//triffic singal system based on time in sec from 0 to 59 from user
#include <iostream>
using namespace std;
int main() {
    int time;
    cout << "Enter time in seconds (0-59): ";
    cin >> time;
    if (time >= 0 && time <= 59) {
        if(time >= 0 && time <= 19) {
            cout << "Red Light" << endl;
        } 
        else if (time >= 20 && time <= 39) {
            cout << "Yellow Light" << endl;
        } 
        else {
            cout << "Green Light" << endl;
        }
    } 
    else {
        cout << "Invalid input! Please enter a value between 0 and 59." << endl;
    }
    return 0;
}