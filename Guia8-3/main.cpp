/** Hacer un programa que solicite 100 números enteros y los guarde en un vector.
   Luego recorrer ese vector para calcular el promedio. Mostrar por pantalla los valores del vector que son mayores al promedio calculado.
 */


#include <iostream>
using namespace std;





int main()
{

    int n[10], mayor, x, cont=0, acu, promedio=0;

     for (x=0; x<10; ++x )
       {
        cout << "Ingrese el Numero: " ;
        cin >> n[x];
        acu +=n[x];
       }

       promedio= acu / x;

     for (x=0; x<10; ++x )
       {
         if (n[x]>promedio)
         {
         cont++;
         }
     }

       cout << "El Promedio es: " << promedio << endl;
       cout << "Mayores al Promedio: " << cont << endl;


    return 0;
}


