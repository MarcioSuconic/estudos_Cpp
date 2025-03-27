#include <iostream>

using namespace std;

int main() {

    // só armazena valores inteiros
    // padrao de valores é sequencial 0,1,2,3

    enum armas{fuzil=100, revolver=8, rifle=12, escopeta=90};

    armas armaSel;
    armaSel = revolver;

    int num;

    cout << armaSel;

    return 0;

}
