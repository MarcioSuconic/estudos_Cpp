#include <iostream>
#include <vector>

int main() {

        std::vector<std::string> produtos = {"mouse","teclado","monitor","gabinete","caixa_som"};
        std::vector<std::string>::iterator it;

        it = produtos.begin();
        std::cout << *it << '\n'; // tem que ser ponteiro

        advance(it,3);
        std::cout << *it << '\n';

        it = produtos.begin();
        std::cout << *next(it,3) << '\n';

        it = produtos.end()-1;
        std::cout << *prev(it,2) << '\n';

        it = produtos.end()-1; // precisa do -1
        std::cout << *it << '\n'; // tem que ser ponteiro

        for (it = produtos.begin(); it!=produtos.end(); it++){
            std::cout << *it << '\n';
        }

	return 0;
}
