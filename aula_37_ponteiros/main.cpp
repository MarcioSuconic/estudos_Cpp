#include <iostream>

int main() {

    int *p, *p1;
    int vetor[10]; //chamou o array de vetor

    p=&vetor[0];
    p1=vetor; // ambas as formas vão atribuir o endereço do primeiro vetor para o ponteiro p

    std::cout << p << '\n';
    std::cout << p1 << '\n';

    p=&vetor[1];
    std::cout << p << '\n';

    p++; // incrementando o ponteiro
    std::cout << p << '\n';

    p++; // incrementando o ponteiro
    std::cout << p << '\n';

    *p++; // incrementando o ponteiro
    std::cout << p << '\n';

    *(p += 1); // incrementando o ponteiro o parenteses é necessario
    std::cout << p << '\n';

    p = &vetor[4];
    *p = 10; // incrementando o ponteiro
    std::cout << vetor[7] << '\n';



    return 0;
}
