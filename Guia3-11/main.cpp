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

    if (nro1 < nro2 && nro2 < nro3)

     {
        cout << "Nros Ordenados : " << nro1 <<  " >> " << nro2 << " >> " << nro3  ;
     }


     if (nro1 < nro3 && nro3 < nro2)

     {
        cout << "Nros Ordenados : " << nro1 <<  " >> " << nro3 << " >> " << nro2  ;
     }

     if (nro2 < nro1 && nro2 < nro3)

     {
        cout << "Nros Ordenados : " << nro2 <<  " >> " << nro1 << " >> " << nro3  ;

     }

     if (nro2 < nro3 && nro3 < nro1)

     {
        cout << "Nros Ordenados : " << nro2 <<  " >> " << nro3 << " >> " << nro1  ;

     }

     if (nro3 < nro1 && nro1 < nro2)

     {
        cout << "Nros Ordenados : " << nro3 <<  " >> " << nro1 << " >> " << nro2  ;

     }

      if (nro3 < nro2 && nro2 < nro1)

     {
        cout << "Nros Ordenados : " << nro3 <<  " >> " << nro2 << " >> " << nro1  ;

     }


    return 0;
}
