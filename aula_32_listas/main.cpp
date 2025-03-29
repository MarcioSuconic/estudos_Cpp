#include <iostream>
#include <list>

int main(){

    std::list<int> aula, teste;
    int tam;
    std::list<int>::iterator it;

    tam = 20;

    teste.push_front(44);
    teste.push_front(54);
    teste.push_front(64);
    teste.push_front(74);

    for(int i=0; i<tam; i++) {
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it,3);
    aula.insert(it,333);

    it = aula.begin();
    advance(it,3);

    aula.erase(--it); //--para retirar o item correto

    tam = aula.size();

    aula.merge(teste);
    aula.sort();

    for(int i=0; i<tam; i++) {
        std::cout << aula.front() << '\n';
        aula.pop_front();
    }
}
