#include <iostream>
#include <windows.h>

#define TEST_KERULET 0
#define TEST_MAXIMUM 0
#define TEST_MAX_MIN 0
#define TEST_ATALAKIT_INCH_CM 0
#define TEST_BELEPESEK 0
#define TEST_TOMB_MAX 0
#define TEST_SUMA 0
#define TEST_ALL 0

using namespace std;

/**
 * 1. �rjatok egy olyan f�ggv�nyt, amely k�t param�terk�nt kapott eg�sz sz�m k�z�l visszat�r�ti a nagyobbat.
 */
int maximum(int a, int b)
{
    /// Implement�ci�t ide
    return 0;
}

/**
 * Eg�sz�ts�tek ki a f�ggv�nyt egy plusz param�terrel, ami meghat�rozza, hogy a f�ggv�ny a k�t �rt�k k�z�l
 * a nagyobbat vagy a kisebbet t�r�ti vissza.
 */
int max_min(int a, int b, bool is_max)
{
    /// Implement�ci�t ide
    return 0;
}

/**
 * 2. �rjatok egy olyan f�ggv�nyt, amely param�terk�nt megkapja egy t�glalap hossz�t �s sz�less�g�t �s
 * visszat�r�ti a t�glalap ker�let�t. A hossz �s a sz�less�g m�terben van megadva �s nem lehet t�bb, mint 10000.
 * pld. Ha hossz=10 �s szelesseg=4, akkor a visszat�r�t�si �rt�k 28.
 */
unsigned int kerulet(unsigned int hossz, unsigned int szelesseg)
{
    /// Implement�ci�t ide
    return 0;
}

/**
 * 3. Egy amerikai bar�totoknak nagy szenved�lye a pillang�gy�jt�s.
 * Rendszeresen megm�ri az �ltala megfogott pillang�k sz�rnyainak a sz�less�g�t.
 * Szeretn�tek elemezni ezeket a m�r�seket, viszont a bar�totok ezt mind h�velykben m�rte,
 * nektek centim�terben kellenek a m�r�sek. �rjatok egy f�ggv�nyt amely param�terk�nt megkapja a m�r�seket
 * �s �talak�tja ezeket h�velykb�l centim�terbe!
 */
void atalakit_inch_cm(float t[], int n)
{
    /// Implement�ci�t ide
}

/**
 * 4. Egy szupermarket-l�nc igazgat�ja megk�rte a csapatotokat arra,
 * hogy �rjatok neki egy programot amely sz�montartja, hogy naponta h�ny ember l�p be a szupermarketbe.
 * Ugyanakkor minden tizedik bel�p�nek adjon 5 sz�zal�k kedvezm�nyt.
 * R�tok maradt az az alfeladat, hogy egy olyan f�ggv�nyt meg�rjatok,
 * ami az egy napi bel�p�seket k�veti �s a kedvezm�nyt kisz�molja.
 */
unsigned int belepesek = 0;
unsigned int belep()
{
    /// Implement�ci�t ide
}

/**
 * 5. �rjatok egy olyan f�ggv�nyt, amely a bemeneti eg�sz sz�mokat tartalmaz� t�mb elemei k�z�l visszaadja
 * a legnagyobb elem �rt�k�t �s index�t.
 */
void tomb_max(int t[], int n, int &max_val, int &max_idx)
{
    /// Implement�ci�t ide
}

/**
 * 6. A suma alprogramnak k�t param�tere van:
 *    - n, amelyen kereszt�l egy term�szetes sz�mot kap a [0, 10^9] intervallumb�l
 *    - s, amelyen kereszt�l visszaadja az egym�st�l k�l�nb�z� p�ratlan sz�mjegyek �sszeg�t.
 *
 * pld. ha n=4713835, akkor az alprogram h�v�sa ut�n s=16 (16=7+1+3+5), ha n=48, akkor s=0
 */
void suma(unsigned int n, int &s)
{
    /// Implement�ci�t ide
}



/**
    Ez a megjegyz�s ut�ni k�dot NEM szabad m�dos�tani!
*/

int passed = 0;
int total = 0;

void assert(int expected, int actual, const char * message);
void assert(int expected1, int expected2, int actual1, int actual2, const char * message);
void display(bool condition, const char * message);

int main()
{
#if(TEST_KERULET == 1 || TEST_ALL == 1)
    /// Kerulet
    cout << "--------------------Kerulet---------------------" << endl;
    assert(28, kerulet(10, 4), "h=10, sz=4");
    assert(40000, kerulet(10000, 10000), "h=10000, sz=10000");
    assert(2052, kerulet(2, 1024), "h=2, sz=1024");

#endif

#if(TEST_MAXIMUM == 1 || TEST_ALL == 1)
    /// Maximum
    cout << "--------------------Maximum---------------------" << endl;
    assert(255, maximum(35, 255), "max(35, 255)");
    assert(-1999, maximum(-1999, -2020), "max(-1999, -2020)");
    assert(5, maximum(0, 5), "max(0, 5)");
#endif

#if(TEST_MAX_MIN == 1 || TEST_ALL == 1)
    /// Maxmin
    cout << "--------------------Maxmin----------------------" << endl;
    assert(255, max_min(8, 255, true), "maxmin(8, 255, true)");
    assert(55, max_min(55, 55, true), "maxmin(55, 55, true)");
    assert(-9, max_min(-9000, -9, true), "maxmin(-9, -9000, true)");

    assert(10, max_min(10, 10, false), "maxmin(10, 10, false)");
    assert(45, max_min(80, 45, false), "maxmin(80, 45, false)");
    assert(-79, max_min(-79, 0, false), "maxmin(-79, 0, false)");
#endif

#if(TEST_BELEPESEK == 1 || TEST_ALL == 1)
    /// Belepesek
    cout << "--------------------Belepesek-------------------" << endl;
    belepesek = 0;
    for (int i = 0; i < 9; ++i)
    {
        char msg[] = "Learazas a(z)  . vasarlonak";
        msg[14] = i + 49;
        assert(0, belep(), msg);
    }
    assert(5, belep(), "10. vasarlonak 5% kedvezmeny");
#endif

#if(TEST_TOMB_MAX == 1 || TEST_ALL == 1)
    /// Tomb max
    cout << "--------------------Tomb max--------------------" << endl;
    int t[10] {1, 5, 6, 80, 255, 65000, 8900, 1, 9, 10};
    int max_val = 0, max_i = 0;
    tomb_max(t, 10, max_val, max_i);
    assert(65000, max_val, 5, max_i, "{1, 5, 6, 80, 255, 65000, 8900, 1, 9, 10} max: 65000, index: 5");
    int t2[10] {-2, -5, -6, -80, -255, -65000, -8900, -1, -9, -10};
    max_val = 0, max_i = 0;
    tomb_max(t2, 10, max_val, max_i);
    assert(-1, max_val, 7, max_i, "{-2, -5, -6, -80, -255, -65000, -8900, -1, -9, -10} max: -1, index: 7");
#endif

#if(TEST_ATALAKIT_INCH_CM == 1 || TEST_ALL == 1)
    /// Huvelyk_centi
    cout << "--------------------Pillango meresek------------" << endl;
    float meresek[5] {9.8, 5.7, 4.6, 6.4, 7.9};
    atalakit_inch_cm(meresek, 5);
    float exp_meresek[5] {24.89, 14.57, 11.68, 16.25, 20.06};
    for (int i = 0; i < 5; ++i)
    {
        char msg[] = "A(z) i. meres";
        msg[5] = i + 49;
        assert(exp_meresek[i], meresek[i], msg);
    }
#endif

#if(TEST_SUMA == 1|| TEST_ALL == 1)
    /// Suma - erettsegi feladat
    cout << "--------------------Suma-erettsegi--------------" << endl;
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

    s = -1;
    suma(48, s);
    assert(0, s, "n = 48 s = 0");
#endif

    cout << "================================================" << endl;
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
