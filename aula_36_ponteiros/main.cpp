#include <iostream>

// um ponteiro armazena o endereço de uma variável
// o ponteiro deve ser do mesmo tipo da variavel

int main(){

    std::string veiculo = "Carro";
    std::string *pv;

    pv = &veiculo; //ponteiro pv recebe o endereço da variável veiculo

    std::cout << veiculo << '\n';
    std::cout << pv << '\n' << &veiculo;

    int num=4;
    int *pn;
    pn = &num;
}
