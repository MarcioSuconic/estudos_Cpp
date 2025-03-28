#include <iostream>

void imp(std::string txt = "Marcio estudando...." );

int main() {
    imp(); // se por um texto aqui será impresso este
    return 0;
}

void imp(std::string txt){
    std::cout << '\n' << txt << '\n';
}
