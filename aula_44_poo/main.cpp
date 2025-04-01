#include <iostream>

class Aviao {

public:
    int vel = 0;
    int velMax;
    std::string tipo;
    void ini(int tp);// prototipar o metodo

private:

};

void Aviao::ini(int tp) { // tipo 1 jato 2 - monomotor 3 - planador

    if (tp==1) {
        this->velMax = 800;
        this->tipo = "Jato";
    } else { if (tp==2){
        this->velMax = 350;
        this->tipo = "Monomotor";
    } else {
        this->velMax = 180;
        this->tipo = "Planador";
    }
    }
}

int main() {
    Aviao *aviao_1 = new Aviao();

    aviao_1->ini(1);

    std::cout << aviao_1->vel << '\n'; //nas outras linguagens usa-se um ponto, aqui ->
    std::cout << aviao_1->velMax << '\n';
    std::cout << aviao_1->tipo << '\n';

    Aviao *aviao_2 = new Aviao();

    aviao_2->ini(3);

    std::cout << aviao_2->vel << '\n'; //nas outras linguagens usa-se um ponto, aqui ->
    std::cout << aviao_2->velMax << '\n';
    std::cout << aviao_2->tipo << '\n';

    return 0;
}

