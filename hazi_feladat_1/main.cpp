#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/**
 * 2. Írjunk egy olyan függvényt, amely paraméterként megkapja egy négyszög hosszát és szélességét
 * és visszatéríti a négyszög kerületét.
 * A hossz és a szélesség méterben van megadva és nem lehet több, mint 10000.
 * pld. Ha hossz = 10 és szelesseg = 4, akkor a visszatérítési érték 28.
 */
unsigned int kerulet(unsigned int hossz, unsigned int szelesseg)
{
    return 0;
}

/**
 * Visszatéríti 'a' és 'b' közül a nagyobbat.
 */
int maximum(int a, int b)
{
    return 0;
}

int maxmin(int a, int b, bool is_max)
{
    return 0;
}

void tomb_max(int t[], int n, int &max_val, int &max_idx)
{
}

void atalakit_cm(float t[], int n)
{
}

/**
 * Megcseréli 'a' és 'b' értékét.
 */
void csere(int &a, int &b)
{

}

/**
 * 4. A suma alpgroramnak két paramétere van:
 *    - n, amelyen keresztül egy természetes számot kap a [0, 10^9] intervallumból
 *    - s, amelyen keresztül visszaadja az egymástól különböző páratlan számjegyek összegét.
 *
 * pld. ha n=4713835, akkor az alprogram hívása után s=16 (16=7+1+3+5), ha n=48, akkor s=0
 */
void suma(unsigned int n, int &s)
{

}

unsigned int belepesek = 0;
unsigned int belep()
{
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
    /// Kerulet
    cout << "----------Kerulet----------" << endl;
    assert(28, kerulet(10, 4), "h=10, sz=4");
    assert(40000, kerulet(10000, 10000), "h=10000, sz=10000");
    assert(2052, kerulet(2, 1024), "h=2, sz=1024");

    /// Maximum
    cout << "----------Maximum----------" << endl;
    assert(255, maximum(35, 255), "max(35, 255)");
    assert(-1999, maximum(-1999, -2020), "max(-1999, -2020)");
    assert(5, maximum(0, 5), "max(0, 5)");

    /// Maxmin
    cout << "----------Maxmin----------" << endl;
    assert(255, maxmin(8, 255, true), "maxmin(8, 255, true)");
    assert(55, maxmin(55, 55, true), "maxmin(55, 55, true)");
    assert(-9, maxmin(-9000, -9, true), "maxmin(-9, -9000, true)");

    assert(10, maxmin(10, 10, false), "maxmin(10, 10, false)");
    assert(45, maxmin(80, 45, false), "maxmin(80, 45, false)");
    assert(-79, maxmin(-79, 0, false), "maxmin(-79, 0, false)");

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



    /// Belepesek
    cout << "--------Belepesek----------" << endl;
    belepesek = 0;
    for (int i = 0; i < 9; ++i)
    {
        char msg[] = "Learazas a(z)  . vasarlonak";
        msg[14] = i + 49;
        assert(0, belep(), msg);
    }
    assert(5, belep(), "10. vasarlonak 5% kedvezmeny");

    /// Tomb max
    cout << "-------Tomb max------------" << endl;
    int t[10] {1, 5, 6, 80, 255, 65000, 8900, 1, 9, 10};
    int max_val = 0, max_i = 0;
    tomb_max(t, 10, max_val, max_i);
    assert(65000, max_val, 5, max_i, "{1, 5, 6, 80, 255, 65000, 8900, 1, 9, 10} max: 65000, index: 5");
    int t2[10] {-2, -5, -6, -80, -255, -65000, -8900, -1, -9, -10};
    max_val = 0, max_i = 0;
    tomb_max(t2, 10, max_val, max_i);
    assert(-1, max_val, 7, max_i, "{-2, -5, -6, -80, -255, -65000, -8900, -1, -9, -10} max: -1, index: 7");

    /// Huvelyk_centi
    cout << "--------Pillango meresek---------" << endl;
    float meresek[5] {9.8, 5.7, 4.6, 6.4, 7.9};
    atalakit_cm(meresek, 5);
    float exp_meresek[5] {24.89, 14.57, 11.68, 16.25, 20.06};
    for (int i = 0; i < 5; ++i)
    {
        char msg[] = "A(z) i. meres";
        msg[5] = i + 49;
        assert(exp_meresek[i], meresek[i], msg);
    }

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

    cout << "=========================================" << endl;
    cout << total << " / " << passed << " helyes" << endl;
    return 0;
}

void assert(int expected, int actual, const char * message)
{
    display(expected == actual, message);
}

void assert(float expected, float actual, const char * message)
{
    const float EPSILON = 0.000000001;
    display((expected - EPSILON < actual) && (expected + EPSILON > actual), message);
}

void assert(int expectedA, int actualA, int expectedB, int actualB, const char * message)
{
    display(expectedA == actualA && expectedB == actualB, message);
}

void display(bool condition, const char * message)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    ++total;
    cout << message;
    if (condition)
    {
        SetConsoleTextAttribute(hConsole, 10);
        cout << " HELYES!";
        ++passed;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        cout << " HELYTELEN!";
    }
    SetConsoleTextAttribute(hConsole, 7);

    cout << endl;
}
