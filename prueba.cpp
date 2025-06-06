#include <iostream>
using namesapce std;
int main (void){
    int n1,n2;
    cout <<"Ingresa tu primer valor que deseas comparar: \n";
    cin >> n1;
    cout <<"Ingresa tu segundo valor que deseas comparar: \n";
    cin >> n2;
    if (n1 >  n2 && n1 <= 100)
    {
        cout <<"Su primer valor " << n1 << " Es mas cercano a 100 que su segundo valor \n";
    }
    else if (n1 < n2 && n1 >= 100)
    {
        cout <<"Su primer valor " << n1 << " Es mas cercano a 100 que su segundo valor \n";
    }
    else if(n2 >  n1 && n2 <= 100)
    {
        cout <<"Su segundo valor " << n2 << " Es mas cercano a 100 que su segundo valor \n";
    }
    else 
    {
        cout <<"Su segundo valor " << n2 << " Es mas cercano a 100 que su segundo valor \n";
    }

    return 0;
}