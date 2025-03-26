#include <iostream>

using namespace std;

int main() {


    int nota;
    int nota_2;

// (expressão) ? valor1 : valor2;
    nota = ( 0 == 0) ? 1: 0;
    cout << nota << "\n";
    nota = ( 1 == 0) ? 1: 0;
    cout << nota << "\n";


// outro jeito....
    (0 == 0) ? nota_2 = 11: nota_2 = 22;
    cout << nota_2 << "\n";
    (0 == 2) ? nota_2 = 11: nota_2 = 22;
    cout << nota_2 << "\n";

// incrementar ou decrementar
    ( 2 == 2) ? nota_2-- : nota_2++ ;
    cout << nota_2 << "\n";
    ( 2 == 1) ? nota_2-- : nota_2++ ;
    cout << nota_2 << "\n";

    return 0;
}
