#include <iostream>
#include <vector>

int main() {

    // clear - limpa tudo
    // pop_back - retira o ultimo elemento

    std::vector<int> num1;
    std::vector<int> num2;
    int tam1,tam2,i;

    num1.push_back(10);
    num1.push_back(8);
    num1.push_back(6);
    num1.push_back(4);
    num1.push_back(2);

    num2.push_back(1);
    num2.push_back(2);
    num2.push_back(3);
    num2.push_back(4);
    num2.push_back(5);

    num1.swap(num2); // troca os vetores, poe 1 em 2 e o 2 em 1.

    num1.insert(num1.begin()+1,888); // primeiro valor mais 1
    num1.insert(num1.end()-1,666); // primeiro valor mais 1

    num1.erase(num1.end()-2);

    tam1 = num1.size();
    tam2 = num2.size();

    std::cout << "tamanho do vector 1: " << tam1 << '\n' << '\n';

    for (i=0;i<tam1;++i){
        std::cout << num1[i] << '\n';
    }

    std::cout << "tamanho do vector 2: " << tam2 << '\n' << '\n';

    for (i=0;i<tam2;++i){
        std::cout << num2[i] << '\n';
    }

    //primeiro elemento do vector
    std::cout << "primeiro elemento do vector num1 eh: " << num1.front() << '\n';
    std::cout << "ultimo elemento do vector num1 eh: " << num1.back() << '\n';
    std::cout << "elemento do meio do vector num1 eh: " << num1.at(tam1/2) << '\n';

    while (!num1.empty()) {
        num1.pop_back();
    }
    tam1 = num1.size();

    std::cout << "tamanho do vector 1: " << tam1 << '\n' << '\n';

    num2.clear();

    return 0;

    // vector tem mais flexibilidade do que array
    tam1 = num2.size();

    std::cout << "tamanho do vector 2: " << tam2 << '\n' << '\n';
}
