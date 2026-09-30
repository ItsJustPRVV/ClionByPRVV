#include <iostream>
using namespace std;
int main() {
    cout << "Lista original: " << endl;
    int listaOriginal[11] = {14, 47, 38, 29, 95, 47, 46, 48, 76, 199, 38};
    for (int i = 0; i < 11; i++) {
        cout << listaOriginal[i] << " ";
    }
    cout <<endl << "Numeros pares en la lista: " << endl;
    int numPares[11];
    int n = 0;
    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            numPares[n] = listaOriginal[i];
            n = n + 1;
        }

    }
    for (int i = 0; i < 10; i++) {
        cout << numPares[i] << " ";
    }
    return 0;
}