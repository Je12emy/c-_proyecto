#include <iostream>
#include <string>
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
                {
                    // Programa Contador de Digitos
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "Contador de Dígitos" << endl;
                    string numero;
                    // Capturar la entrada
                    cout << "Ingrese un numero:" << "";
                    cin >> numero;
                    int tamaño = numero.length();
                    // Con la funcion length es posible obtner el tamaño de una cadena de texto
                    if(tamaño < 8) {
                        // Variables acumuladores
                        int suma = 0;
                        // Variable temporal para guardar el valor de un item dentro de la cadena de texto
                        string temp;
                        // Iterar por cada item en la cadena de texto
                        for(int i = 0; i < tamaño; i++){
                            // Guardar el valor actual
                            temp = numero[i];
                            suma = suma + stoi(temp);
                        }
                        // Mostrar resultados
                        cout << endl;
                        cout << "- Suma de los digitos: " << suma << endl;
                        cout << "- Cantidad de digitos: " << tamaño << endl;

                    } else {
                        cout << "Ese numero no es valido" << endl;
                    }
                    break;
                }
            case 3:
                {
                // Programa Susesión Numerica
                cout << "Susesión Numerica" << endl;
                // Numero maximo por imprimir
                const int maximo = 20;
                // Indicador de cuada cuanto se reinicia la secuencia
                const int parada = 5;
                for(int i = 0; i < maximo; i++) {
                    // No imprimir la primera iteración de 0
                    if(i != 0){
                        // Imprirmir numero
                        cout << i << "";
                    }
                    // Imprimir todos los numeros hasta el numero actual
                    // Si el numero actual es multiplo de la variable parada
                    if((i % parada) == 0) {
                        cout << endl;
                        // Imprimir todos los numeros hasta el numero actual
                        for(int j = 0; j < i+1; j++) {
                            cout << j << "";
                        }
                    } 

                }
                cout << endl;
                break;
                }
            default:
                cout << "Esa no es una opción valida";
        }


    } while(run);
    return 0;
}
