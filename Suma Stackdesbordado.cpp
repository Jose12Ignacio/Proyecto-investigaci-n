#include <iostream>
using namespace std;

int numero = 0;
void suma() { 
    numero++;
    cout << "Número: " << numero << endl; 
suma(); }

int main() {
    suma();
    return 0;
}