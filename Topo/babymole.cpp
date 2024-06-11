#include <iostream>
using namespace std;
void operacion(int[2][3], int[2][3], int[2][3], int);

int main() {
    int primero[2][3] = {16, 18, 23, 54, 91, 11};
    int segundo[2][3] = {24, 52, 77, 16, 19, 59};
    int tercero[2][3];
    int num;
    do {
        cout << "Desea restar o sumar los arreglos?, 1 para sumar, -1 para restar\n";
        cin >> num;
        
        if(num != 1 && num != -1) {
            cout << "El valor que introdujo es incorrecto, intentelo de nuevo\n";
        }
    } while(num != 1 && num != -1);
    

    operacion(primero, segundo, tercero, num);

    cout << "Resultado de la operacion:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << tercero[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

void operacion(int primero[2][3], int segundo[2][3], int tercero[2][3], int num) {
    if(num == 1) {
        for(int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                tercero[i][j] = primero[i][j] + segundo[i][j];
            }
        }
    } else {
        for(int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                tercero[i][j] = primero[i][j] - segundo[i][j];
            }
        }
    }
}