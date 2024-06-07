#include <iostream>
using namespace std;
void det3(int, int, int, int, int, int, int, int, int);
int det2(int, int, int, int);

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9;

    cout << "Para calcular el determinante de una matriz 3x3 por favor introduzca los siguientes datos:\n";
    cout << "Valor 1: ";
    cin >> n1;
    cout << "\nValor 2: ";
    cin >> n2;
    cout << "\nValor 3: ";
    cin >> n3;
    cout << "\nValor 4: ";
    cin >> n4;
    cout << "\nValor 5: ";
    cin >> n5;
    cout << "\nValor 6: ";
    cin >> n6;
    cout << "\nValor 7: ";
    cin >> n7;
    cout << "\nValor 8: ";
    cin >> n8;
    cout << "\nValor 9: ";
    cin >> n9;
    
    det3(n1, n2, n3, n4, n5, n6, n7, n8, n9);

    return 0;
}

void det3(int a11, int a12, int a13, int a21, int a22, int a23, int a31, int a32, int a33) {
    int dt1 = det2(a22, a23, a32, a33);
    int dt2 = det2(a21, a23, a31, a33);
    int dt3 = det2(a21, a22, a31, a32);

    int determinante = a11 * dt1 - a12 * dt2 + a13 * dt3;

    cout << "El determinante de la matriz 3x3 es: " << determinante;
}

int det2(int n1, int n2, int n3, int n4) {
    return n1 * n4 - n2 * n3;
}