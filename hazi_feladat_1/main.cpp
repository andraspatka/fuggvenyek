#include <iostream>
#include <windows.h>

using namespace std;

/**
 * Visszatéríti 'x' és 'y', két természetes szám szorzatát.
 */
unsigned int szoroz(unsigned int x, unsigned int y) {
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
 * 4. A suma alpgroramnak két paramétere van:
 *    - n, amelyen keresztül egy természetes számot kap a [0, 10^9] intervallumból
 *    - s, amelyen keresztül visszaadja az egymástól különböző páratlan számjegyek összegét.
 *
 * pld. ha n=4713835, akkor az alprogram hívása után s=16 (16=7+1+3+5), ha n=48, akkor s=0
 */
void suma(unsigned int n, int &s) {

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
    /// Szorzas
    cout << "----------Szorzas----------" << endl;
    assert(6, szoroz(2, 3), "2 * 3");
    assert(500, szoroz(10, 50), "10 * 50");
    assert(2048, szoroz(2, 1024), "2 * 1024");

    /// Maximum
    cout << "----------Maximum----------" << endl;
    assert(255, maximum(35, 255), "max(35, 255)");
    assert(-1999, maximum(-1999, -2020), "max(-1999, -2020)");
    assert(5, maximum(0, 5), "max(0, 5)");

    /// Csere
    cout << "----------Csere------------" << endl;
    int x = 5, y = 10;
    csere(x, y);
    assert(10, x, 5, y, "x = 10, y = 5");

    x = 5;
    y = 5;
    csere(x, y);
    assert(5, x, 5, y, "x = 5, y = 5");

    x = -890;
    y = -891;
    csere(x, y);
    assert(-891, x, -890, y, "x = -891, y = -890");

    /// Suma - erettsegi feladat
    cout << "-----Suma-erettsegi--------" << endl;
    int s = 0;
    suma(4713835, s);
    assert(16, s, "n = 4713835 s = 16");

    s = -100;
    suma(47138359, s);
    assert(25, s, "n = 47138359 s = 25");

    s = -1;
    suma(97137359, s);
    assert(25, s, "n = 97137359 s = 25");

    s = -1;
    suma(177313835, s);
    assert(16, s, "n = 177313835 s = 16");


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
