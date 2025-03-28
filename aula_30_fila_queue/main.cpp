#include <iostream>
#include <queue>

/*

pilha, stack
tubo fechado --> primeiro a entrar, ultimo a sair

fila, queue
tubo aberto --> primeiro a entrar, primeiro a sair

*/

int main() {

    std::queue <std::string> cartas;

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ourus");
    cartas.push("rei de paus");

    // faz a verificação se a pliha está vazia
    std::cout << cartas.empty() << '\n';

    if (cartas.empty()) {
        std::cout << "Fila vazia";
    } else {
        std::cout << "Fila com valores. " << cartas.size() << " valores." << "\n";
    }

    if (cartas.size() == 0) {
        std::cout << "Fila vazia";
    } else {
        std::cout << "Fila com valores. " << cartas.size() << " valores." << "\n";
    }

    // ! --> negação
    while (!cartas.empty()) {
        cartas.pop();
    }

    if (cartas.size() == 0) {
        std::cout << "Fila vazia";
    } else {
        std::cout << "Fila com valores. " << cartas.size() << " valores." << "\n";
    }
    return 0;
}
