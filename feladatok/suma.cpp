#include <iostream>

/**
 * 9. var
 */
void suma(unsigned int n, int &s) {
    bool szamok[10] = {0};

    s = 0;
    while (n != 0) {
        int maradek = n % 10;
        if (maradek % 2 != 0 && szamok[maradek] == 0) {
            szamok[maradek] = 1;
            s = s + maradek;
        }
        n = n / 10;
    }
}

int main () {

    int s = 0;
    suma(471038359, s);
    std::cout << "s: "<< s << std::endl;
    return 0;
}