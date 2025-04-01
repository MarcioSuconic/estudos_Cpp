#include <iostream>
#include "classes.h"

int main(){

    Veiculos *v1 = new Veiculos(1);
    Veiculos *v2 = new Veiculos(2);
    Veiculos *v3 = new Veiculos(3);

    //v1->velMax = 300; // da para mudar pois velMax é publico
    //v1->setVelMax(950);

    v1->setLigado(1);
    v3->setLigado(1);

    std::cout << v1->getVelMax() << '\n';
    std::cout << v2->getVelMax() << '\n';
    std::cout << v3->getVelMax() << '\n';

    std::cout << v1->getLigado() << '\n';
    std::cout << v2->getLigado() << '\n';
    std::cout << v3->getLigado() << '\n';

}
