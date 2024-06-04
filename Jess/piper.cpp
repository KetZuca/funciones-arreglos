#include <iostream>
using namespace std;
int euclides(int, int);

int main() {
    int num1, num2;
    do {
        cout << "Ingrese un numero entero positivo: ";
        cin >> num1;
        cout << "\nIngrese un segundo numero entero positivo: ";
        cin >> num2;

        if(num1 < 0 || num2 < 0) {
            cout << "Tienen que ser positivos, intentelo de nuevo\n";
        }
    } while(num1 < 0 || num2 < 0);

    int resultado = euclides(num1, num2);

    cout << "El maximo comun divisor es: " << resultado;
    return 0;

}

int euclides(int num1, int num2) {
    if(num1 == 0) {
        return num2;
    }
    return euclides(num2 % num1, num1);
}