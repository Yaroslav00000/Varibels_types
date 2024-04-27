#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
    double Length;
    cout << "Length = ";
    cin >> Length;
    double radius = Length / (2 * 3.14);
    double area = 3.14 * (radius* radius);
    cout << "Area = " << area << endl;
    system("pause");
    return 0;
}