#include <iostream>
using namespace std;
int main(void){
    int dia;
    cout <"Ingrese el numero correspondiente al dia de la semana en el que se encuentre, recuerde que 1 = Lunes, 2 = Martes ... Asi sucesivamente hasta el 7 = Domingo\n";
    cin >> dia;
    switch (dia)
    {
    case 1:
        cout <<"Usted a digitado: " << dia << " Por lo tanto su dia es el Lunes \n";
        break;
    case 2:
        cout <<"Usted a digitado: " << dia << " Por lo tanto su dia es el Martes \n";
        break;
    case 3:
        cout <<"Usted a digitado: " << dia << " Por lo tanto su dia es el Miercoles \n";
        break;
    case 4:
        cout <<"Usted a digitado: " << dia << " Por lo tanto su dia es el Jueves \n";
        break;
    case 5:
        cout <<"Usted a digitado: " << dia << " Por lo tanto su dia es el Viernes \n";
        break;
    case 6:
        cout <<"Usted a digitado: " << dia << " Por lo tanto su dia es el Sabado \n";
        break;
    case 7:
        cout <<"Usted a digitado: " << dia << " Por lo tanto su dia es el Domingo \n";
        break;
    default:
        cout <<"Usted es como medio tontito \n";
        break;
    }

    return 0;
}