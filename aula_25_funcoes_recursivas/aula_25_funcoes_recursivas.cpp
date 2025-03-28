#include <iostream>

void contador_for(int num);
void contador_recursivo(int num, int cont=0);

int main() {
    contador_for(20);
    contador_recursivo(20);
}

void contador_for(int num) {
    for (int i=0; i<num; ++i) {
        std::cout << i << '\n';
    }
}

void contador_recursivo(int num, int cont) {
        std::cout << cont << '\n';

        if (num > cont) {
            contador_recursivo(num, ++cont); // ++i pré-incremento i++ pós incremento
        }
}
