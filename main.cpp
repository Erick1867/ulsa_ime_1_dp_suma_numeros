#include <iostream>

int main() {
    // 1. Constante: valor que no cambia durante la ejecución
    const int CANTIDAD = 5;

    // 2. Variables (siempre inicializadas)
    double suma = 0.0;
    double numero = 0.0;

    std::cout << "Suma de " << CANTIDAD << " numeros\n";

    // 3. Ciclo: repetir CANTIDAD veces
    for (int i = 0; i < CANTIDAD; i++) {
        std::cout << "Ingresa el numero " << i + 1 << ": ";
        std::cin >> numero;

        suma = suma + numero;
    }

    // 4. Salida
    std::cout << "La suma total es: " << suma << "\n";

    // ¿Qué significa return 0;?
    return 0;
}