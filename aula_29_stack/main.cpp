#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack <string> cartas;

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ourus");
    cartas.push("rei de paus");

    // faz a verificação se a pliha está vazia
    cout << cartas.empty() << endl;

    if (cartas.empty()) {
        cout << "Pilha vazia";
    } else {
        cout << "Pilha com valores. " << cartas.size() << " valores." << "\n";
    }

    if (cartas.size() == 0) {
        cout << "Pilha vazia";
    } else {
        cout << "Pilha com valores. " << cartas.size() << " valores." << "\n";
    }

    // ! --> negação
    while (!cartas.empty()) {
        cartas.pop();
    }

    if (cartas.size() == 0) {
        cout << "Pilha vazia";
    } else {
        cout << "Pilha com valores. " << cartas.size() << " valores." << "\n";
    }

    return 0;

}
