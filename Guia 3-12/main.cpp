#include <iostream>

using namespace std;

int main()
{

    int nro1, nro2, nro3 ;


    cout << "Ingresar Nro 1:"  ;
    cin >> nro1;
    cout << "Ingresar Nro 2:"  ;
    cin >> nro2;
    cout << "Ingresar Nro 3:"  ;
    cin >> nro3;

 //Cartel si la suma de los dos primeros es mayor al producto del 2do y ero

    if ( (nro1 + nro2) > ( nro2 * nro3) )

     {
        cout << "suma de los N1 y N2 es mayor a producto de N2 y N3 " <<endl ;
     }



    return 0;
}
