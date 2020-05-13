#include <iostream>

using namespace std;


/**
 * Bontsátok le az adott programot alprogramokra. Figyeljetek arra, hogy
 * minél kevesebb ismétlés legyen a kódban és a kód minél olvashatóbb legyen!
 *
 * Megjegyzés: legalább 4 alprogramra le lehet bontani az alábbi kódot.
 */
int main()
{
    int n = 10;
    int t[10], v[10], r[10];

    for (int i = 0; i < n; ++i) {
        t[i] = i;
    }

    for (int i = 0; i < n; ++i) {
        v[i] = 8 * i;
    }

    for (int i = 0; i < n; ++i) {
        r[i] = t[i] + v[i];
    }

    int max_value = r[0];
    for (int i = 1; i < n; ++i) {
        if (r[i] > max_value) {
            max_value = r[i];
        }
    }

    int min_value = r[0];
    for (int i = 1; i < n; ++i) {
        if (r[i] < min_value) {
            min_value = r[i];
        }
    }

    cout << "r tomb max ertek: " << max_value << endl;
    cout << "r tomb min ertek: " << min_value << endl;

    cout << "t tomb ";
    for (int i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }
    cout << endl;

    cout << "v tomb ";
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "r tomb ";
    for (int i = 0; i < n; ++i) {
        cout << r[i] << " ";
    }
    cout << endl;

    return 0;
}
