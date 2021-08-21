#include <iostream>
#include <string>
using namespace std;

int main(){
    bool run = true;
    // Contador de intentos restantes
    int intentos = 3;
    do {
        // Información del Proyecto
        cout << "===============================================" << endl;
        cout << "==       Proyecto Final de Programación       =" << endl;
        cout << "===============================================" << endl;
        cout << endl;
        
        cout << "~ Julian Rodriguez Vega: 117110191" << endl;
        cout << "~ Dayanna Lugo Vargas: 117030085" << endl;
        cout << "~ Maria Fernanda Marin: 118260918" << endl;

        cout << endl;

        cout << "Programas Disponibles:" << endl;
        cout << "1. Calculador de Promedio Ponderado." << endl;
        cout << "2. Contador de Dígitos." << endl;
        cout << "3. Sucesión Numérica." << endl;
        cout << "4. Salir." << endl;

        int programa;

        cout << "Ingrese una opción: ";
        cin >> programa;

        cout << endl << endl;
        switch(programa) {
            case 1:
                {
                // Reiniciar el contador de intentos
                intentos = 3;
                cout << "--------------------------------" << endl;
                cout << "-      Promedio Ponderado      -" << endl;
                cout << "--------------------------------" << endl;

                // Programa Calculador de promedio
                string nombre;

                cout << "Ingrese un nombre: " << "";
                cin >> nombre;

                float nota1;
                float porcentaje1;
                float nota2;
                float porcentaje2;
                float nota3;
                float porcentaje3;
                float nota4;
                float porcentaje4;
                float nota5;
                float porcentaje5;
                float nota6;
                float porcentaje6;
                float resultado;

                // Obtener valores
                cout << "- Ingrese un valor para el primer instrumento: ";
                cin >> nota1;
                cout << "+ Ingrese un porcentaje para el primer instrumento: ";
                cin >> porcentaje1;

                cout << "- Ingrese un valor para el segundo instrumento: ";
                cin >> nota2;
                cout << "+ Ingrese un porcentaje para el segundo instrumento: ";
                cin >> porcentaje2;

                cout << "- Ingrese un valor para el tercer instrumento: ";
                cin >> nota3;
                cout << "+ Ingrese un porcentaje para el tercer instrumento: ";
                cin >> porcentaje3;

                cout << "- Ingrese un valor para el cuarto instrumento: ";
                cin >> nota4;
                cout << "+ Ingrese un porcentaje para el cuarto instrumento: ";
                cin >> porcentaje4;

                cout << "- Ingrese un valor para el quinto instrumento: ";
                cin >> nota4;
                cout << "+ Ingrese un porcentaje para el quinto instrumento: ";
                cin >> porcentaje4;

                cout << "- Ingrese un valor para el sexto instrumento: ";
                cin >> nota6;
                cout << "+ Ingrese un porcentaje para el sexto instrumento: ";
                cin >> porcentaje6;

                // Calcular promedio ponderado
                // Fuente: https://es.wikihow.com/calcular-el-promedio-ponderado
                resultado = (nota1 * porcentaje1/100) + (nota2 * porcentaje2/100) + (nota3 * porcentaje3/100) + (nota4 * porcentaje4/100) + (nota5 * porcentaje5/100) + (nota6 * porcentaje6/100);

                cout << endl;
                cout << "Resultados: " << endl;
                cout  << "Calificación final es " << resultado << endl;

                // Evaluar resultado
                if(resultado >= 70) {
                    cout << nombre <<" ha aprobado el curso!" << endl;
                } else {
                    cout << nombre <<" ha reprobado el curso" << endl;
                }
                break;
                }
            case 2:
                {
                    // Reiniciar el contador de intentos
                    intentos = 3;
                    // Programa Contador de Dígitos
                    cout << "--------------------------------" << endl;
                    cout << "-      Contador de Dígitos     -" << endl;
                    cout << "--------------------------------" << endl;
                    string numero;
                    // Capturar la entrada
                    cout << "Ingrese un numero: " << "";
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
                        cout << "~ Suma de los dígitos: " << suma << endl;
                        cout << "~ Cantidad de dígitos: " << tamaño << endl;
                        cout << endl;

                    } else {
                        cout << "Ese numero no es valido..." << endl;
                    }
                    break;
                }
            case 3:
                {
                // Reiniciar el contador de intentos
                intentos = 3;
                // Programa Susesión Numerica
                cout << "--------------------------------" << endl;
                cout << "-    Sucesión Numérica         -" << endl;
                cout << "--------------------------------" << endl;
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
                cout << endl;
                break;
                }
            case 4:
            {
                intentos = 3;
                char salir;
                cout << "¿Desea salir del programa?[s/n]: ";
                cin >> salir;
            
                switch (salir) {
                    case 's':
                    {
                        cout << "Cerrando programa...." << endl;
                        run = false;
                        break;
                    }
                    case 'n':
                    {
                        break;
                    }
                    default:
                    {
                        cout << "Esa no es una opción!" << endl;
                    }
                }
            break;

            }
            default: 
            {
                // Reducir la cantidad de intentos
                intentos = intentos - 1;
                cout << "Esa no es una opción valida... Intentos restantes " << intentos << endl;
                if (intentos == 0) {
                    cout << "Ha llegado al limite de intentos, cerrando programa.." << endl;
                    run = false;
                }
                break;
            }

        }
    } while(run);
    return 0;
}
