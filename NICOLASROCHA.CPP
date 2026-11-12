#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int valores[TAM];

    cout << "Ingrese " << TAM << " numeros enteros:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> valores[i];
    }

    int suma = 0;
    for (int i = 0; i < TAM; i++) {
        suma += valores[i];
    }

    cout << "\nLa suma total de los elementos es: "
         << suma << endl;
    return 0;
}
