#include <iostream>
#include <iomanip> // Librería para manipulación de formato de salida
using namespace std;

int main()
{
    // Imprimir la primera fila de encabezados
    cout << setw(4) << " ";
    for (int i = 1; i <= 10; ++i) {
        cout << setw(4) << i;
    }
    cout << endl;

    // Imprimir el separador
    cout << "--------------------------" << endl;

    // Imprimir la tabla de multiplicar
    for (int i = 1; i <= 10; ++i) {
        cout << setw(2) << i << " |";
        for (int j = 1; j <= 10; ++j) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}
