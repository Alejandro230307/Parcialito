#include <iostream>
using namespace std;
int main( void ){
    int edad;
    cout <<"Ingrese su edad \n";
    cin >> edad;
    if (edad <= 5)
    {
        cout <<"Su entrada es gratis \n";
    }
    else if (edad > 5 && edad <= 12)
    {
         cout <<"Su entrada tendia un precio de 5 dolares americanos de los estados unidos de america \n";
    }
    else 
    {
         cout <<"Su entrada tendia un precio de 10 dolares americanos de los estados unidos de america \n";
    }

    


    return 0;
}