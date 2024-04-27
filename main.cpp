#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
    double R1,R2,R3;
    cout << "Enter R1 = ";
    cin >> R1;
    cout << "Enter R2 = ";
    cin >> R2;
    cout << "Enter R3 = ";
    cin >> R3;
    double R = (1 / R1) + (1 / R2) + (1 / R3);
    double R_O = 1 / R;
    cout << "R0= " << R_O << endl;
    system("pause");
    return 0;
}