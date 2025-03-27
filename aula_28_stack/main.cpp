#include <iostream>
#include <stack>

//using std::cout;
//using std::cin;

using namespace std;

// primeiro elemento que entra na pilha é o ultimo a sair

int main() {

    stack <string> cartas;

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ourus");
    cartas.push("rei de paus");

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Topo da pilha: " << cartas.top() << "\n\n";

    cartas.pop();

    cout << "Novo Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Novo Topo da pilha: " << cartas.top() << "\n\n";

    cartas.pop();

    cout << "Novo Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Novo Topo da pilha: " << cartas.top() << "\n\n";

    cartas.pop();

    cout << "Novo Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Novo Topo da pilha: " << cartas.top() << "\n\n";

    return 0;

}
