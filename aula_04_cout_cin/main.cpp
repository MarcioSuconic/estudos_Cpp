#include <iostream>

using namespace std;

int main() {
    // tipo nome;
    // tipo nome = valor;
    int vidas_1 = 0; // recebe numeros inteiros e podem ser negativos
    int vidas_2 = 34; // recebe numeros inteiros e podem ser negativos
    char letra_1='B'; // recebe 1 caracter, uma letra
    //char letra_2[20]='Marcio'; // recebe até 20 caracteres, [] é um vetor, cada letra fica num vetor
    double decimal_1=2.666666666666666; // recebe numero decimal
    float decimal_2=2.6666666666666; // igual ao double mas tem uma precisao menor que o double
    bool vivo=true; // verdadeiro ou falso --> true false --> 0 e 1
    string nome = "Marcio Suconic"; // recebe um texto

    // se imprimir o valor de vidas, vai imprimir o ZERO
    cout << "Digite a qtde de vidas 1: ";
    cin >> vidas_1;
    cout << "Digite a qtde de vidas 2: ";
    cin >> vidas_2;
    // cout << letra_1 << endl;
    // cout << decimal_1 << endl;
    // cout << decimal_2 << '\n';
    // cout << vivo << endl;
    // cout << nome << '\n';

    cout << vidas_1 << endl << vidas_2 << '\n' << letra_1 << endl << decimal_1 << endl << decimal_2 << '\n' << "teste" << vivo << '\n' << "O nome é: " << nome << '\n';
    return 0;
}