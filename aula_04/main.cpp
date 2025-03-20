#include <iostream>

using namespace std;

int main() {
    // tipo nome;
    // tipo nome = valor;
    int vidas_1 = 0; // recebe numeros inteiros e podem ser negativos
    int vidas_2; // recebe numeros inteiros e podem ser negativos
    char letra_1='B'; // recebe 1 caracter, uma letra
    //char letra_2[20]='Marcio'; // recebe até 20 caracteres, [] é um vetor, cada letra fica num vetor
    double decimal_1=2.666666666666666; // recebe numero decimal
    float decimal_2=2.6666666666666; // igual ao double mas tem uma precisao menor que o double
    bool vivo=true; // verdadeiro ou falso --> true false --> 0 e 1
    string nome = "Suconic"; // recebe um texto

    // se imprimir o valor de vidas, vai imprimir o ZERO
    cout << vidas_1 << endl;
    cout << vidas_2 << '\n';
    cout << letra_1 << endl;
    //cout << letra_2 << '\n';
    cout << decimal_1 << endl;
    cout << decimal_2 << '\n';
    cout << vivo << endl;
    cout << nome << '\n';

    return 0;
}