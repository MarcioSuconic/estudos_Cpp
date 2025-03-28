#include <iostream>

int fatorial(int num);
int fibonacci(int num);

// formula de fibonacci = F(n + 2) = F(n + 1) + F(n)

int main() {

    int result, valor_fat, valor_fibo;


    valor_fat =8;
    result = fatorial(valor_fat);
    std::cout << "o fatorial de " << valor_fat << " eh " << result ;

    valor_fibo = 21;
    for (int i = 0; i <valor_fibo; ++i) {
        std::cout << fibonacci(i+1) << '\n';
    }

    return 0;

}

int fatorial(int n) {
    if (n==0) {
        return 1;
    }
    return (n*fatorial(n-1));
}

int fibonacci(int n) {
    if (n==1 || n==2) {
        return 1;
    } else {
    return fibonacci(n-1)+fibonacci(n-2);
    }
}
