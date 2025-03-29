#include <iostream>

struct Carro {
    std::string marca;
    std::string modelo;
    std::string cor;
    int potencia;
    int aceleracao;
    int Velocidade_Atual;
    int velMax;

    void insere(std::string stmarca, std::string stmodelo, std::string stcor, int itpotencia, int itaceleracao, int itvelmax) {
    cor = stcor;
    marca = stmarca;
    modelo = stmodelo;
    potencia = itpotencia;
    aceleracao = itaceleracao;
    velMax = itvelmax;
    Velocidade_Atual = 0;
    }

    void mostra() {

    std::cout << "\n\nMarca................... : " << marca;
    std::cout << "\nModelo.................. : " << modelo;
    std::cout << "\nCor..................... : " << cor;
    std::cout << "\nPotencia................ : " << potencia;
    std::cout << "\nAceleracao.............. : " << aceleracao;
    std::cout << "\nVelocidade Maxima....... : " << velMax;
    std::cout << "\nVelocidade Atual........ : " << Velocidade_Atual;
    }

    void mudaVel(int mv) {
        Velocidade_Atual = mv;

        if (Velocidade_Atual > velMax) {
            Velocidade_Atual = velMax;
        }
        if (Velocidade_Atual < 0) {
            Velocidade_Atual = 0;
        }
    }

};


int main() {

    Carro *carros = new Carro[5];

    Carro car1, car2, car3, car4, car5;

    carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;

    carros[0].insere("Toyota","Corolla XEI","prata",120,5,220);
    carros[1].insere("FIAT","Siena","vermelho",120,5,180);
    carros[2].insere("VW","Fusca","branco",120,5,140);
    carros[3].insere("BMW","M5","preto",120,5,260);
    carros[4].insere("Ford","Scort","azul",120,5,240);

    for (int i=0; i<5; ++i) {
        carros[i].mostra();
    }

    return 0;
}
