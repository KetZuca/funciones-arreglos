#include <iostream>
using namespace std;

struct FN {
    int dia;
    int mes;
    int anio;
};

struct color {
    string cabello;
    string ojos;
};

struct Persona {
    string nombre;
    float altura;
    FN fecha;
    color colores;
    string sexo;
};

int main() {
    Persona p;
    int num;
    cout << "Cuantas personas quiere registrar?\n";
    cin >> num;

    Persona* arr = new Persona[num];
    
    for(int i = 0; i < num; i++) {
        cout << "Nombre: ";
        cin >> arr[i].nombre;
        cout << "\nAltura (cm): ";
        cin >> arr[i].altura;
        cout << "\nDia de nacimiento: ";
        cin >> arr[i].fecha.dia;
        cout << "\nMes de nacimiento: ";
        cin >> arr[i].fecha.mes;
        cout << "\nAnio de nacimiento: ";
        cin >> arr[i].fecha.anio;
        cout << "\nColor de cabello: ";
        cin >> arr[i].colores.cabello;
        cout << "\nColor de ojos: ";
        cin >> arr[i].colores.ojos;
        cout << "\nHombre o mujer?: ";
        cin >> arr[i].sexo;
        if(i != num - 1) {
            cout << "Cargado los datos, porfavor introduzca los de la otra persona.\n";
        }
    }

    cout << endl << endl << "Nombre\tAltura\tFecha de nacimiento\tCabello\tOjos\tSexo\n";

    for(int i = 0; i < num; i++) {
        cout << arr[i].nombre << "\t" << arr[i].altura << "cm\t" << arr[i].fecha.dia << "/" << arr[i].fecha.mes << "/" << arr[i].fecha.anio << "\t\t"
             << arr[i].colores.cabello << "\t" << arr[i].colores.ojos << "\t" << arr[i].sexo << endl;
    }
    
    return 0;
}