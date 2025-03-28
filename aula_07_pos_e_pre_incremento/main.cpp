#include <iostream>

int x,y;

int main() {
    x = 1;
    y = 1;
    x = y++; // x recebe o valor de y não acrescido, depois y é acrescido
    std::cout << "pos-incremento: " << '\n' << "x: " << x << '\n' << "y: " << y << '\n' << '\n';

    x = 1;
    y = 1;
    x = ++y; // x recebe o valor de y já acrescido
    std::cout << "pre-incremento: " << '\n' << "x: " << x << '\n' << "y: " << y << '\n';
}
