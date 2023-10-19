#include <iostream>

int main() {
    int n;
    long long fatorial = 1;

    std::cout << "Digite um número inteiro: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "O fatorial de um número negativo não é definido." << std::endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            fatorial *= i;
        }
        std::cout << "O fatorial de " << n << " é " << fatorial << std::endl;
        std::cout << "Fim do programa" << std::endl;
    }

    return 0;
}