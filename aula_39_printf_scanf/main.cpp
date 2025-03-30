#include <iostream>
#include <stdio.h>

int main(){

    int num1 = 123, num2 = 23, num3 = 24;
    char nome[10] = "Matcio";

    printf("Marcio Suconic\n");
    printf("C++\n");
    printf("Marcio Suconic\n\0 nao sera impresso isso"); // na verdade, sempre tem um barra 0 no final de cada string

    printf("O valor das variaveis num1, num2 e num3 sao %d, %d e %d respectivamente.\n", num1,num2,num3);

    // d ou i p inteiros
    // x ou X p inteiras hexadecimais
    // unsigned u inteiro sem sinal
    // s string
    // f flout double
    // p ponteiros

    nome[0] = 'M';
//    nome[1] = 'a';
//    nome[2] = 'r';
//    nome[3] = 'c';
//    nome[4] = 'i';
    nome[5] = 'o';

    printf("O valor do nome eh %s \ne o valor da variavel num eh: %d\n", nome, num1);

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num1);

    printf("\nDigite o none: ");
    scanf("%s", &nome);

    printf("O valor do nome eh %s \ne o valor da variavel num eh: %d\n", nome, num1);


    return 0;
}
