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
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\"U lukomor'a dub zelenij," << "\n Zlataya zep na dupe tom," << "\n I dnem i nochju kot uchenij " << "\n vse hodit po cepi krugom\"" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");
    return 0;
}