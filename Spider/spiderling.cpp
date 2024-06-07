#include <iostream>
using namespace std;

int main() {
    int arr[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};

    int mayor = arr[0][0], menor = arr[0][0];
    int indices[4];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            if(arr[i][j] > mayor) {
                mayor = arr[i][j];
                indices[0] = i;
                indices[1] = j;
            }
            if(arr[i][j] < menor) {
                menor = arr[i][j];
                indices[2] = i;
                indices[3] = j;
            }
        }
    }

    cout << "El numero mayor del array es: " << mayor << " y se encuentra ubicado en la posicion [" << indices[0] << "][" << indices[1] << "]" << endl
         << "El numero menor del array es: " << menor << " y se encuentra ubicado en la posicion [" << indices[2] << "][" << indices[3] << "]";

    return 0; 
}