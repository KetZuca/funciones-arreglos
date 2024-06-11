#include <iostream>
using namespace std;

void desplegar(char figuras[][8], char colores[][8]) {
    for (int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout << colores[i][j] << figuras[i][j] << " ";
        }
        cout << endl;
    }
}

void mover(char figuras[][8], char colores[][8]) {
    int x1, y1, x2, y2;
    cout << "Ingrese las coordenadas de la ficha que desee mover (X1 Y1): ";
    cin >> x1 >> y1;
    cout << "Ingrese las coordenadas de la posicion final (X2 Y2): ";
    cin >> x2 >> y2;

    if(x1 < 0 || x1 >= 8 || y1 < 0 || y1 >= 8 || x2 < 0 || x2 >= 8 || y2 < 0 || y2 >= 8) {
        cout << "Coordenadas invalidas intente nuevamente.\n";
        return;
    }

    if(colores[x2][y2] != 'O' && colores[x2][y2] != 'B') {
        cout << "La ficha solo se puede mover a un espacio vacio o del color contrario\n";
        return;
    }

    figuras[x2][y2] = figuras[x1][y1];
    colores[x2][y2] = colores[x1][y1];
    figuras[x1][y1] = ' ';
    colores[x1][y1] = 'O';

    desplegar(figuras, colores);
}

int main() {
    char figuras[8][8] = {
        {'T', 'C', 'A', 'M', 'R', 'A', 'C', 'T'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'T', 'C', 'A', 'M', 'R', 'A', 'C', 'T'}
    };

    char colores[8][8] = {
        {'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N'},
        {'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'},
        {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'}
    };

    // Desplegar el tablero inicial
    desplegar(figuras, colores);

    // Mover una ficha
    mover(figuras, colores);

    return 0;
}