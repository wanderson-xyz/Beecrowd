#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Exponenciação modular rápida: calcula a^b mod m
long long mod_pow(long long a, long long b, long long m) {
    long long result = 1;
    a = a % m;
    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return result;
}

// Teste de Fermat para um número num
bool fermat_primality_test(long long num, int num_tests = 5) {
    // Casos especiais
    if (num == 2 || num == 3)
        return true;
    if (num <= 1 || num % 2 == 0)
        return false;

    for (int i = 0; i < num_tests; i++) {
        // Sorteia a ∈ [2, num - 2]
        long long a = 2 + rand() % (num - 3);

        long long res = mod_pow(a, num - 1, num);

        if (res != 1) {
            // Falhou em um teste → não é primo
            return false;
        }
    }

    // Passou em todos os testes → provavelmente primo
    return true;
}

int main() {
    srand(time(0));  // Inicializa o gerador de números aleatórios

    long long num;
    cout << "Digite um numero para testar: ";
    cin >> num;

    if (fermat_primality_test(num, 5)) {
        cout << "O numero " << num << " eh primo (provavelmente)." << endl;
    } else {
        cout << "O numero " << num << " nao eh primo." << endl;
    }

    return 0;
}
