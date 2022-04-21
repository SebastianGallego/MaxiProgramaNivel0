/**
 Hacer una función llamada “mayor” que reciba dos números enteros y
devuelva el mayor de ellos o cero si son iguales.
 */



#include <iostream>

using namespace std;

int mayor(int a, int b);


int main()
{

    int n1, n2, result;


        cout << "Ingrese el Nro 1: " ;
        cin >> n1;
        cout << "Ingrese el Nro 2: ";
        cin >> n2;

        result = mayor(n1,n2);

        cout << "El Mayor es: " << result;


    return 0;
}


int mayor(int a, int b)
{
    int c=0;


    if (a>b && a!=b)
       {
        c=a;
       } else if (a<b && a!=b){
         c=b;
         }

    return c;

}
