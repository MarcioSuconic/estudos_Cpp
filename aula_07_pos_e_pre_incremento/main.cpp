#include <iostream>

int x,y;

int main() {
    x = 1;
    y = 1;
    x = y++; // x recebe o valor de y n�o acrescido, depois y � acrescido
    std::cout << "pos-incremento: " << '\n' << "x: " << x << '\n' << "y: " << y << '\n' << '\n';

    x = 1;
    y = 1;
    x = ++y; // x recebe o valor de y j� acrescido
    std::cout << "pre-incremento: " << '\n' << "x: " << x << '\n' << "y: " << y << '\n';
}
