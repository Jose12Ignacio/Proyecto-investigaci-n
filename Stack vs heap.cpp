#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    // Medir el tiempo de ejecución para la pila
    auto iniciostack = high_resolution_clock::now();
    volatile int stackArray[1000000]; // array grande en la pila
    auto finalStack = high_resolution_clock::now();
    auto duracionStack = duration_cast<milliseconds>(finalStack - iniciostack).count();

    // Medir el tiempo de ejecución para el montón
    auto startHeap = high_resolution_clock::now();
    volatile int* heapArray = new int[1000000]; // array grande en el montón
    auto endHeap = high_resolution_clock::now();
    auto durationHeap = duration_cast<milliseconds>(endHeap - startHeap).count();

    cout << "Tiempo de ejecución para la pila: " << duracionStack << " ms" << endl;
    cout << "Tiempo de ejecución para el montón: " << durationHeap << " ms" << endl;

    delete[] heapArray; // liberar memoria del montón
    return 0;
}
