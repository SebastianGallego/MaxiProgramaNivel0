#include <iostream>

using namespace std;

int main()
{

    int nro1, nro2, nro3, nro4 ;


    cout << "Ingresar Nro 1:"  ;
    cin >> nro1;
    cout << "Ingresar Nro 2:"  ;
    cin >> nro2;
    cout << "Ingresar Nro 3:"  ;
    cin >> nro3;
    cout << "Ingresar Nro 4:"  ;
    cin >> nro4;


    if (nro1 == nro2 && nro2==nro3 && nro3==nro4)

     {
        cout << "Los 4 numeros son iguales:"  ;
     }

    return 0;
}
