#include <iostream>

// um ponteiro armazena o endere�o de uma vari�vel
// o ponteiro deve ser do mesmo tipo da variavel

int main(){

    std::string veiculo = "Carro";
    std::string *pv;

    pv = &veiculo; //ponteiro pv recebe o endere�o da vari�vel veiculo

    std::cout << veiculo << '\n';
    std::cout << pv << '\n' << &veiculo;

    int num=4;
    int *pn;
    pn = &num;
}
