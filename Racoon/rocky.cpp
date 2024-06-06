#include <iostream>
using namespace std;
void burbuja(int [][3], int [9]);

int main() {
    int m[3][3] = {{2, 6, 8}, {9, -9, 0}, {5, 2, 3}};
    int mO[9];
    burbuja(m, mO);

    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            m[i][j] = mO[i * 3 + j];
        }
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}

void burbuja(int arr[][3], int arru[9]) {
    int contador = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            arru[contador] = arr[i][j];
            contador++;
        }
    }

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - 1; j++) {
            if(arru[j] > arru[j+1]) {
            int aux = arru[j];
            arru[j] = arru[j+1];
            arru[j+1] = aux;
            }
        }
    }
    return;
    
}