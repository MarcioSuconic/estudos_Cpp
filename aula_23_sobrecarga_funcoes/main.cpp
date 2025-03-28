#include <iostream>

//sobrecarga de funções

void soma();
void soma(int n1, int n2);

int main() {
    soma(20,30);
    soma();
}

void soma (int n1, int n2) {
    int res;
    res = n1 + n2;
    std::cout << res << '\n' ;
}

void soma() {
    int n1, n2, res;
    n1 = 10;
    n2 = 20;
    res = n1 + n2;
    std::cout << "A soma eh: " << res << '\n';
}
