#include <iostream>
#include "classes.h"

int main() {

    Moto *veiculo_1 = new Moto();
    veiculo_1->imprimir();

    Carro *veiculo_2 = new Carro();
    veiculo_2->imprimir();

    Tanque *veiculo_3 = new Tanque();
    veiculo_3->imprimir();
}
