#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {

	//std::fstream fs;
    //fs.open ("test.txt", std::fstream::in | std::fstream::out | std::fstream::app);

    std::fstream arquivo;
    arquivo.open("marsoft.txt", std::ios::out | std::ios::app); // app de append, irah incluir os nomes, se tirar o app, ele apaga o arquivo

    char opc='s';
    std::string nome;
    int linha;
    std::string linha_str;

    while((opc=='s') or (opc=='S')) {
        std::cout << "\nDigite um nome: ";
        std::cin >> nome;
        arquivo << nome << '\n';
        std::cout << "\nDigitar um novo nome (s/n): ";
        std::cin >> opc;
        system("CLS");
    }
    arquivo.close();

    std::fstream arquivo_2;
    arquivo_2.open("marsoft.txt", std::ios::in);
    std::cout << "Nomes digitados:" << '\n';

    if (arquivo_2.is_open()) {

        while (getline(arquivo_2,linha_str)) {
            std::cout << linha_str << '\n';
        }
        arquivo_2.close();


    } else {
        std::cout << "Arquivo nao foi aberto.";
    }


	return 0;
}
