//age difference calculator between two birthdates
#include <iostream>
using namespace std;
int main() {
    int day1, month1, year1;
    int day2, month2, year2;
    
    cout << "Enter first birthdate (day month year): ";
    cin >> day1 >> month1 >> year1;
    
    cout << "Enter second birthdate (day month year): ";
    cin >> day2 >> month2 >> year2;
    
    if (day2 < day1) {
        month2--;
        day2 += 30; 
    }
    
    if (month2 < month1) {
        year2--;
        month2 += 12;
    }
    
    int diffDay = day2 - day1;
    int diffMonth = month2 - month1;
    int diffYear = year2 - year1;
    
    cout << "Age difference is: " << diffYear << " years, " 
         << diffMonth << " months, and " 
         << diffDay << " days." << endl;
         
    return 0;
}