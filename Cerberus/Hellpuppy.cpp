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

void datos(Persona& p) {
    cout << "Nombre: ";
    cin >> p.nombre;
    cout << "Altura (cm): ";
    cin >> p.altura;
    cout << "Dia de nacimiento: ";
    cin >> p.fecha.dia;
    cout << "Mes de nacimiento: ";
    cin >> p.fecha.mes;
    cout << "Anio de nacimiento: ";
    cin >> p.fecha.anio;
    cout << "Color de cabello: ";
    cin >> p.colores.cabello;
    cout << "Color de ojos: ";
    cin >> p.colores.ojos;
    cout << "Hombre o mujer?: ";
    cin >> p.sexo;
}

void mostrar(const Persona& p) {
    cout << p.nombre << "\t" << p.altura << "cm\t" << p.fecha.dia << "/" << p.fecha.mes << "/" << p.fecha.anio << "\t\t"
         << p.colores.cabello << "\t" << p.colores.ojos << "\t" << p.sexo << endl;
}

int main() {
    int num;
    cout << "Cuantas personas quiere registrar?\n";
    cin >> num;
    Persona* arr = new Persona[num];
    
    for(int i = 0; i < num; i++) {
        cout << "Cargando datos de persona " << i + 1 << endl;
        datos(arr[i]);
    }
    cout << endl << endl << "Nombre\tAltura\tFecha de nacimiento\tCabello\tOjos\tSexo\n";

    for(int i = 0; i < num; i++) {
        mostrar(arr[i]);
    }
    
    return 0;
}



    