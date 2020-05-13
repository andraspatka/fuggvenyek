#include <iostream>
#include <cmath>

/**
 * 16. var
 */
int nrDivPrimi(int n) {
    int nDiv = 0;
    int nSave = n;
    for (int div = 2; div < sqrt(nSave) && n != 1; ++div){
        int countDiv = 0;
        while (n % div == 0) {
            n = n / div;
            countDiv++;
        }
        if (countDiv % 2 == 1) {
            nDiv++;
        }
    }
    return nDiv;
}

int main () {

    int s = 0;
    s = nrDivPrimi(9000);
    std::cout << "s: "<< s << std::endl;
    return 0;
}
