#include <iostream>
#include <list>

std::list<int> insere_pela_frente(std::list<int> lista, int qtde);
std::list<int> insere_por_tras(std::list<int> lista, int qtde);
std::list<int> apagar_toda_lista(std::list<int> lista);

int main() {

    std::list<int> aula;
    std::list<int>::iterator it;

    aula = insere_pela_frente(aula, 10);
    std::cout << "o tamanho da lista eh: " << aula.size() << '\n';

    // inserir um elemento em uma tal posicao
    it = aula.begin();
    advance(it,5);
    aula.insert(it,99);

    aula.sort(); // ordena a lista crescente
    aula.reverse(); // ordena a lista decrescente

    aula = apagar_toda_lista(aula);
    std::cout << "o tamanho da lista eh: " << aula.size() << '\n';



    return 0;
}


std::list<int> insere_pela_frente(std::list<int> lista, int qtde) {

    for(int i=0; i<qtde; ++i){
        lista.push_front(i); // insere pela frente
    }

    return lista;
}

std::list<int> insere_por_tras(std::list<int> lista, int qtde) {

    for(int i=0; i<qtde; ++i){
        lista.push_back(i); // insere pela frente
}
}

std::list<int> apagar_toda_lista(std::list<int> lista) {

    std::cout << "o tamanho da lista a apagar é: " << lista.size() << '\n';

    for (int i=0; lista.size()>0; i++) {
        std::cout << "item " << i << " com o valor " << lista.front() << ", o ultimo valor eh: " << lista.back() << " da lista serah apagado. \n";
        lista.pop_front();
    }

    return lista;
}

