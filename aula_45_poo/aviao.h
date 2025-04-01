#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao {

public:
    int vel = 0;
    int velMax;
    std::string tipo;
    Aviao(int tp);// método construtor
    void imprimir();

private:

};

Aviao::Aviao(int tp) { // tipo 1 jato 2 - monomotor 3 - planador

    if (tp==1) {
        velMax = 800;
        tipo = "Jato";
    } else { if (tp==2){
        velMax = 350;
        tipo = "Monomotor";
    } else {
        velMax = 180;
        tipo = "Planador";
    }
    }
}


void Aviao::imprimir() {

    std::cout << '\n' << '\n' << "Dados do aviao:" << '\n';
    std::cout << "O aviao é do tipo      " << tipo << '\n';
    std::cout << "A velocidade maxima eh " << velMax << '\n';
    std::cout << "A velocidade atual eh  " << vel << '\n';
}


#endif // AVIAO_H_INCLUDED
