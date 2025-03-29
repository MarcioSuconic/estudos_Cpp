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

    Carro Corolla;

    Corolla.insere("Toyota","Corolla XEI","prata",120,5,220);

    Corolla.mostra();
    Corolla.mudaVel(400);
    Corolla.mostra();
}
