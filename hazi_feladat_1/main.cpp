#include <iostream>
#include <windows.h>

using namespace std;

/**
 * Visszatéríti 'x' és 'y' összegét.
 */
int osszead(int x, int y) {
    return 0;
}

/**
 * Visszatéríti 'a' és 'b' közül a nagyobbat.
 */
int maximum(int a, int b) {
    return 0;
}

/**
 * Megcseréli 'a' és 'b' értékét.
 */
void csere(int &a, int &b) {

}

/**
    Írjátok át az 'osszead', 'maximum' és 'csere' alprogramokat úgy,
    hogy a program futtatása után minden ellenőrzés 'HELYES' eredményt adjon!
    Ez a megjegyzés utáni kódot NEM szabad módosítani!
*/

int passed = 0;
int total = 0;

void assert(int expected, int actual, const char * message);
void assert(int expected1, int expected2, int actual1, int actual2, const char * message);
void display(bool condition, const char * message);

int main()
{

    assert(5, osszead(2, 3), "2 + 3");
    assert(-11, osszead(-9, -2), "-9 + (-2)");
    assert(2125754, osszead(1536789, 588965), "1536789 + 588965");

    assert(255, maximum(35, 255), "max(35, 255)");
    assert(-1999, maximum(-1999, -2020), "max(-1999, -2020)");
    assert(5, maximum(0, 5), "max(0, 5)");

    // Swap
    int x = 5, y = 10;
    csere(x, y);
    assert(10, x, 5, y, "Elemcsere: x = 10, y = 5");

    x = 5;
    y = 5;
    csere(x, y);
    assert(5, x, 5, y, "Elemcsere: x = 5, y = 5");

    x = -890;
    y = -891;
    csere(x, y);
    assert(-891, x, -890, y, "Elemcsere: x = -891, y = -890");


    cout << total << " / " << passed << " helyes" << endl;
    return 0;
}

void assert(int expected, int actual, const char * message) {
    display(expected == actual, message);
}

void assert(int expectedA, int actualA, int expectedB, int actualB, const char * message) {
    display(expectedA == actualA && expectedB == actualB, message);
}

void display(bool condition, const char * message) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    ++total;
    cout << message;
    if (condition) {
        SetConsoleTextAttribute(hConsole, 10);
        cout << " HELYES!";
        ++passed;
    } else {
        SetConsoleTextAttribute(hConsole, 12);
        cout << " HELYTELEN!";
    }
    SetConsoleTextAttribute(hConsole, 7);

    cout << endl;
}
