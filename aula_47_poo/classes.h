#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{

public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imprimir();

private:
    int tipo; //1-Moto 2-Caminhao 3-Tanque
    int velMax;
    bool arma;

};

void Veiculo::imprimir(){
    std::cout << "Tipo do veículo: " << tipo << '\n';
    std::cout << "Velocidade máxima: " << velMax << '\n';
    std::cout << "Qtde rodas: " << rodas << '\n';
    std::cout << "Blindagem: " << blind << '\n';
}

void Veiculo::setTipo(int tp){
    tipo=tp;
}

void Veiculo::setVelMax(int vm){
    velMax = vm;
}

void Veiculo::setArma(bool ar){
    arma = ar;
}


class Moto:public Veiculo {
public:
    Moto();
};

Moto::Moto() { // metodo construtor é o metodo que tem o mesmo nome da classe
    vel = 0;
    blind = 0;
    rodas = 2;
    setArma(false);
    setTipo(1);
    setVelMax(120);
}

#endif // CLASSES_H_INCLUDED
