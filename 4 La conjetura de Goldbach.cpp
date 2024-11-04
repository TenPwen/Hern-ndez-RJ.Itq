//La conjetura de Goldbach establece que cualquier número entero par mayor que 2 puede expresarse como la suma de dos números primos. 

#include <iostream>
#include <cmath>

// Función para verificar si un número es primo
bool esPrimo(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

// Función para verificar la conjetura de Goldbach
void verificarGoldbach(int n) {
    if (n <= 2 || n % 2 != 0) {
        std::cout << "La conjetura de Goldbach solo se aplica a números pares mayores que 2." << std::endl;
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
    std::cout << "No se encontró una representación como suma de dos primos." << std::endl;
}

int main() {
    int n;
    std::cout << "Ingrese un número par mayor que 2: ";
    std::cin >> n;

    verificarGoldbach(n);

    return 0;
}

