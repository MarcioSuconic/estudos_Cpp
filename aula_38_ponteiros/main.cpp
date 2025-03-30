#include <iostream>

void somar(float var, float valor);
void somar_2(float *var, float valor);
void ponteiro_array(float *v);

int main() {

    float num2, num = 0;
    float vetor[5];

    // o valor num não é alterado
    somar(num, 15);
    std::cout << num << '\n';



    ponteiro_array(vetor);

    for (int i=0; i<5; ++i){
        std::cout << vetor[i] << '\n';
    }

    // agora a mudanca é no endereco da variavel num
    somar_2(&num, 15);
    std::cout << num << '\n';

    return 0;
}

void somar(float var, float valor) {
    var = valor + var;
}

void somar_2(float *var, float valor) {
    *var = valor + *var;
}

void ponteiro_array(float *v) {
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0;
}
