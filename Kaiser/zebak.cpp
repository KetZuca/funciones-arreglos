#include <iostream>
using namespace std;

void burbuja(int [9], int num = 1);

int main() {
    
    int mO[9] = {2, 6, 8, 9, -9, 0, 5, 2, 3};
    char y;
    int num;
    cout << "Desea ordenar el arreglo de mayor a menor (Y/N)?\n";
    cin >> y;
    if(y == 'Y'|| y == 'y') {
        num = -1;
    } else {
        num = 1;
    }
    burbuja(mO, num);

    
    
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << mO[i * 3 + j] << " ";
        }
    }


    return 0;
}

void burbuja(int arru[9], int num) {
    int contador = 0;
    

    if(num == 1) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9 - 1; j++) {
                if(arru[j] > arru[j+1]) {
                int aux = arru[j];
                arru[j] = arru[j+1];
                arru[j+1] = aux;
                }
            }
        }
    } else {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9 - 1; j++) {
                if(arru[j] < arru[j+1]) {
                int aux = arru[j];
                arru[j] = arru[j+1];
                arru[j+1] = aux;
                }
            }
        }
    }
    return;
    
}