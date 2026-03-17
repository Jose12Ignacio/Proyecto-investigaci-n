#include <iostream>
using namespace std;

int numero = 0;

void suma() {
    volatile int arreglo[500000];  // array grande
    numero++;

    cout << "Numero: " << numero << endl;

    suma(); // llamada recursiva
}

int main() {
    suma();
    return 0;
}