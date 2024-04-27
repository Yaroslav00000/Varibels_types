#include <iostream>
#include <Windows.h>
using namespace std;

enum Color
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    LightBrown = 14,

};
int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char rucka = 205;
    cout << "\tName";
    cout << "\t   :";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "  \"The war and the peace\"" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\tAvtor";
    cout << "\t   :";
    cout << "    L.N. Tolstoj" << endl;
    cout << "\tIzdatelstvo";
    cout << ":";
    cout << "   Piter" << endl;
    cout << "\tPages";
    cout << "\t   :";
    SetConsoleTextAttribute(hConsole, 13);
    cout << "  500" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");
    return 0;
}