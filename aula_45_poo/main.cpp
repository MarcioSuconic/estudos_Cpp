#include <iostream>
#include "aviao.h"
#include <stdlib.h>

int main(){

    system("color 37");

    Aviao *aviao_1 = new Aviao(1);
    aviao_1->imprimir();

    Aviao *aviao_2 = new Aviao(2);
    aviao_2->imprimir();

    Aviao *aviao_3 = new Aviao(3);
    aviao_3->imprimir();
    }
