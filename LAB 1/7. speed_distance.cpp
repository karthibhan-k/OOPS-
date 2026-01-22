//speed and distance calculation based on user input
#include <iostream>
using namespace std;

int main() {
    float speed, time, distance;
    cout << "Enter the speed (in km/h): ";
    cin >> speed;
    cout << "Enter the time (in hours): ";
    cin >> time;
    distance = speed * time;
    cout << "The distance traveled is: " << distance << " km" << endl;
    return 0;
}