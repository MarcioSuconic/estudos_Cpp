#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculos {

public:
    int vel;
    int tipo;
    Veiculos(int tp); // mesmo nome para o metodo construtor, é chamado automaticamente
    int getVelMax();
    bool getLigado();
    void setLigado(int l);

private:
    std::string nome;
    int velMax;
    bool ligado = false;
    void setVelMax(int vm);
};

bool Veiculos::getLigado(){
    return ligado;
}

void Veiculos::setLigado(int l){

    if (l==1){
        ligado = true;
    } else if(l==0) {
        ligado = false;
        }
}

int Veiculos::getVelMax(){
    return velMax;
}

void Veiculos::setVelMax(int vm){
    velMax = vm;
}

Veiculos::Veiculos(int tp){
    tipo = tp;

    if (tipo==1) {
        nome = "Carro";
        velMax = 200;
    } else if(tipo==2) {
        nome = "Aviao";
        velMax = 800;
    } else if(tipo==3) {
        nome = "Navio";
        velMax = 120;
    }
}

#endif
