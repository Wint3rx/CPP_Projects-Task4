#include <iostream>

int main() {
    int num1, num2, num3;

    // Lectura de los tres números
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    std::cout << "Ingrese el tercer número (debe ser mayor que los dos primeros y menor o igual a su suma): ";
    std::cin >> num3;

    while (!(num3 > num1 && num3 > num2 && num3 <= num1 + num2)) {
        std::cout << "El tercer número no cumple con las condiciones. Ingrese otro valor: ";
        std::cin >> num3;
    }

    std::cout << "El tercer número cumple con las condiciones." << std::endl;

    return 0;
}
