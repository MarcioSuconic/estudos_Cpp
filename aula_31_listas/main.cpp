#include <iostream>
#include <list>

int main() {

    std::list<int> aula;
    int tamanho_lista;

    tamanho_lista = 10;
    for(int i=0; i<tamanho_lista; ++i){
        aula.push_front(i); // insere pela frente
    }

    tamanho_lista = 20;
    for(int i=11; i<tamanho_lista; ++i){
        aula.push_back(i); // insere por trás
    }

    std::cout << "Tamanho da lista eh: " << aula.size() << '\n' ;

    tamanho_lista = aula.size();
    for(int i=0; i<tamanho_lista; ++i){
        aula.front();

        std::cout << "Tamanho da lista eh: " << aula.size() << '\n' ;
        aula.pop_front();
    }

    return 0;
}
