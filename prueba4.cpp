#include <iostream>
using namespace std;
int main (void){
    int n1, n2, opc, resultado;
    cout <<"Ingresa el numero de la operacion que deseas realizar\n";
    cout <<"1- Suma \n";
    cout <<"2- Resta \n";
    cout <<"3- Multiplicacion \n";
    cout <<"4- Division \n";
    cin >> opc;
    switch (opc)
    {
    case 1:
        cout <<"Ingresa el primer valor que deseas sumar\n";
        cin >> n1;
        cout <<"Ingrese el segundo valor que deseas sumar\n";
        cin >> n2;
        cout <<"La suma de sus valores es: " << n1 + n2 <<"\n";
        cin >> resultado;
        break;
    case 2:
        cout <<"Ingresa el primer valor que deseas restar\n";
        cin >> n1;
        cout <<"Ingrese el segundo valor que deseas restar\n";
        cin >> n2;
        cout <<"La suma de sus valores es: " << n1 - n2 <<"\n";
        cin >> resultado;
        break;
    case 3:
        cout <<"Ingresa el primer valor que deseas multiplicar\n";
        cin >> n1;
        cout <<"Ingrese el segundo valor que deseas multiplicar\n";
        cin >> n2;
        cout <<"La suma de sus valores es: " << n1 * n2 <<"\n";
        cin >> resultado;
        break;
    case 4:
        cout <<"Ingresa el primer valor que deseas dividir\n";
        cin >> n1;
        cout <<"Ingrese el segundo valor que deseas dividir\n";
        cin >> n2;
        cout <<"La suma de sus valores es: " << n1 / n2 <<"\n";
        cin >> resultado;
        break;
    default:
        cout <<"Ingrese una opcion valida plis\n";
        break;
    }



    return 0;
}