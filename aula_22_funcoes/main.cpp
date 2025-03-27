#include <iostream>

// precisamos prototipar estas funções
void texto();
void soma(int n1, int n2);
int soma_2(int n1, int n2);
void tr(std::__cxxll::string tra[4]);

int main() {

    int res;
    std::string transp[4] {"carro","moto","barco","aviao"};

    texto();
    soma(15,5);
    res = soma_2(100, 50);

    std::cout << "O valor da soma 2 eh: " << res << '\n';

    tr(transp);

    return 0;
}

void texto() {
    std::cout << "Marcio Suconic " << "está na área !!!!" << '\n';
}

void soma(int n1, int n2) {
    std::cout << "soma dos valores: " << n1 + n2 << '\n' ;
}

int soma_2(int n1, int n2){
    return (n1 + n2);
}

void tr(string tra[4]) {
    for(int i=0; i<4; ++i) {
        cout << tra[i] << '\n';
    }
}
