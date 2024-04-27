#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
    double speed,time,acceleration;
    cout << "Speed = ";
    cin >> speed;
    cout << "time = ";
    cin >> time;
    cout << "acceleration = ";
    cin >> acceleration;
    double Distance = (speed * time) + ((acceleration * (time * time)/2));
    cout << "Distance = " << Distance << " m" << endl;
    system("pause");
    return 0;
}