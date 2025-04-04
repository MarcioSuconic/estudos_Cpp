#include <iostream>
#include <fstream>

int main() {

    int num_linha = 0;

    //ofstream ---- saida
    // ifstream ---- entrada
    // fstream--- entrada e saida

    std::ofstream arquivoS;
    arquivoS.open("marsoft.txt"); // nao precisa definir o modo de operacao

    arquivoS << "Primeiro texto gravado por C++ \n";
    arquivoS << "Primeiro, não mais, texto gravado por C++ \n";
    arquivoS << "Aluno Marcio Suconic \n";
    arquivoS << "Faremos um jogo F1 em C++, faremos. \n";
    arquivoS.close();

    std::ifstream arquivoE;
    std::string linha;

    arquivoE.open("marsoft.txt");
    if(arquivoE.is_open()) {
        std::cout << "Arquivo estah aberto. \n\n";
        while (getline(arquivoE,linha)){ // getline --> retorna a linha, passa-se o arquivo e a variavel que serah armazenado
            ++num_linha;
            std::cout << "na linha ... " << num_linha << " - ";
            std::cout << linha << std::endl;
        }
        arquivoE.close();
    } else {
        std::cout << "Arquivo nao abriu.\n";
    }

    return 0;
}
