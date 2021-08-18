#include <iostream>
using namespace std;

int main(){
    bool run = true;
    do {
        // Información del Proyecto
        cout << "***********************************************************" << endl;
        cout << "Proyecto Final de Programación" << endl;
        cout << endl;

        cout << "Estudiantes: " << endl;
        cout << "- Julian Rodriguez Vega: 117080874" << endl;
        cout << "- Dayana Lugo Vargas: 117080874" << endl;
        cout << "- Maria Fernanda Marin: 117080874" << endl;

        cout << endl;

        cout << "Programas Disponibles" << endl;
        cout << "1. Calculador de Promedio" << endl;
        cout << "2. Contador de Digitos." << endl;
        cout << "3. Sucesión Numerica." << endl;

        int programa;

        cout << "Ingrese una opción: ";
        cin >> programa;

        switch(programa) {
            case 1:
                // Programa Calculador de promedio
                break;
            case 2:
                // Programa Contador de Digitos
                break;
            case 3:
                // Programa Susesión Numerica
                break;
            default:
                cout << "Esa no es una opción valida";
        }


    } while(run);
    return 0;
}
