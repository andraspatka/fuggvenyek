#include <iostream>

using namespace std;


void f(int t[2]) {
    t[0] = 2;
    t[1] = 2;
}


void tomb(int n, int t[]) {
    for (int i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }

}

void s(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void g(int a, int b) {
    int c = a + b;
}

int m(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int b = 10;

int z(int a, int b) {
    return a * b;
}

int fuggv(int &b) {
    int c = b;
    b = b + 2;
    return b;
}

int main() {
    int a = 3;
    a = fuggv(a);
    return 0;
}
