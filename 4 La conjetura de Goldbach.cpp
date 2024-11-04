//La conjetura de Goldbach establece que cualquier n�mero entero par mayor que 2 puede expresarse como la suma de dos n�meros primos. 

#include <iostream>
#include <cmath>

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

// Funci�n para verificar la conjetura de Goldbach
void verificarGoldbach(int n) {
    if (n <= 2 || n % 2 != 0) {
        std::cout << "La conjetura de Goldbach solo se aplica a n�meros pares mayores que 2." << std::endl;
        return;
    }

    int i = 2;
    while (i <= n / 2) {
        if (esPrimo(i) && esPrimo(n - i)) {
            std::cout << n << " = " << i << " + " << (n - i) << std::endl;
            return;
        }
        i++;
    }
    std::cout << "No se encontr� una representaci�n como suma de dos primos." << std::endl;
}

int main() {
    int n;
    std::cout << "Ingrese un n�mero par mayor que 2: ";
    std::cin >> n;

    verificarGoldbach(n);

    return 0;
}

