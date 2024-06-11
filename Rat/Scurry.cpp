#include <iostream>
using namespace std;
void traspaso(int[4][5], int[20]);
void ordenado(int[20]);

int main() {
    int arr[4][5];
    int ordenar[20];
    cout << "Por favor introduzca 20 numeros positivos\n";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            do {
                cout << "Valor " << i * 5 + j + 1 << ": ";
                cin >> arr[i][j];

                if(arr[i][j] < 0) {
                    cout << "Tienen que ser numeros positivos\n";
                }
            } while(arr[i][j] < 0);
        }
    }

    traspaso(arr, ordenar);

    cout << "Lista de numeros ordenada\n";
    for(int i = 0; i < 20; i++) {
        cout << ordenar[i] << " ";
    }

    return 0;
}

void traspaso(int arr[4][5], int ordenar[20]) {
    
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            ordenar[i * 5 + j] = arr[i][j];
        }
    }

    ordenado(ordenar);
}

void ordenado(int ordenar[20]) {
     for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20 - 1; j++) {
            if(ordenar[j] < ordenar[j+1]) {
            int aux = ordenar[j];
            ordenar[j] = ordenar[j+1];
            ordenar[j+1] = aux;
            }
        }
    }
}