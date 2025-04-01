#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>

int main() {

    float pi = M_PI;
    int num = 12;

    printf ("Marcio Suconic\n");
    printf ("O valor de PI eh : %f\n", pi);
    printf ("O valor de PI eh : %.2f\n", pi);
    printf ("O valor de PI eh : %07.2f\n", pi);

    printf ("O valor de num eh : %07d\n", num);

    std::cout << "Valor de num eh em decimal eh: " << num << '\n';
    std::cout << "Valor de num eh em decimal eh: " << std::dec << num << '\n';
    std::cout << "Valor de num eh em hexadecimal eh: " << std::hex << num << '\n';
    std::cout << "Valor de num eh em octal ou octadecimal eh: " << std::oct << num << '\n';
    std::cout << "Valor de num eh em hexadecimal eh: " << std::setbase(16) << num << '\n';

    std::cout.precision(3); //conta o ponto
    std::cout << pi << '\n';

    std::cout.precision(-1);
    std::cout << pi << '\n';

    std::cout << "Valor de PI eh em notacao cientifica eh: " << std::scientific << pi << '\n';
    std::cout << "Valor de PI eh em notacao cientifica eh: " << std::setprecision(3) << pi << '\n';
    std::cout << "Valor de PI eh em notacao cientifica eh: " << std::setw(18) << std::scientific << pi << '\n';
    std::cout << "Valor de PI eh em notacao cientifica eh: " << std::setw(18) << std::setfill('0') << std::scientific << pi << '\n';

}
