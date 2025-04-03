#include <iostream>
#include <stdio.h> // para a funcao gets
#include <stdlib.h> // para a funcao malloc (alocacao de memoria)

int main() {

    char nome_2[5];
    gets(nome_2);
    std::cout <<  nome_2 << '\n';

    char *vnome;

    /*retorno da funcao*/
    vnome = (char *) malloc(1 + sizeof(char));

    gets(vnome);

    std::cout << vnome << '\n';

    std::cout << sizeof(char) << '\n';
    std::cout << sizeof(int) << '\n';

    std::cout << &nome_2 << '\n';
    std::cout << &vnome;

    return 0;

}
