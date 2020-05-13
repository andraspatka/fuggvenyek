#include <iostream>

/**
 * 9. var
 */
void produs(unsigned int n, int &s) {
    bool szamok[10] = {0};

    s = 1;
    while (n) {
        int maradek = n % 10;
        if (maradek % 2 == 0 && szamok[maradek] == 0) {
            szamok[maradek] = 1;
            s = s * maradek;
        }
        n = n / 10;
    }

    if (s == 1) {
        s == -1;
    }
}

int main () {

    int s = 0;
    produs(1622325, s);
    std::cout << "s: "<< s << std::endl;
    return 0;
}