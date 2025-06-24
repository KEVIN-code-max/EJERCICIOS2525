#include <iostream>
using namespace std;

int main() {
    int contador = 0;

    cout << "Números pares del 1 al 50:" << endl;

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            contador++;
        }
    }

    cout << "\nCantidad de números pares: " << contador << endl;

    return 0;
}
