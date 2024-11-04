#include <iostream>
using namespace std;

void tanqueDeAgua(int capacidad, int llenado) {
    int nivelActual = 0;
    while (nivelActual < capacidad) {
        cout << "Nivel actual: " << nivelActual << " litros" << endl;
        int cantidadAgregar = min(llenado, capacidad - nivelActual);
        nivelActual += cantidadAgregar;
        cout << "Se agregan " << cantidadAgregar << " litros" << endl;
        system("pause"); // Pausa para ver el proceso
    }
    cout << "Tanque lleno" << endl;
}

int main() {
    int capacidad, llenado;
    cout << "Ingrese la capacidad del tanque (litros): ";
    cin >> capacidad;
    cout << "Ingrese la cantidad de llenado por iteración (litros): ";
    cin >> llenado;
    tanqueDeAgua(capacidad, llenado);
    return 0;
}
