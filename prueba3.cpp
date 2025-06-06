#include <iostream>
using namespace std;
int main (void){
    int cali;
    cout <<"Ingrese su calificacion del 0 al 100 \n";
    cin >> cali;
    switch (cali / 10)
    {
    case 10;
        cout <<"Usted tiene una claificacion perfecta A++ \n";
        break;
    case 9;
        cout <<"Usted tiene una claificacion perfecta B+ \n";
        break;
    case 7;
        cout <<"Usted tiene una claificacion perfecta C+ \n";
        break;
    case 6;
        cout <<"Usted tiene una claificacion perfecta D+ \n";
        break;
    
    default:
        cout <<"Usted tiene una claificacion perfecta F+ \n";
        break;
    }


    return 0;
}