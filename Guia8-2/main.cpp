/** Hacer un programa que solicite 50 n�meros enteros y los guarde en un vector.
Luego recorrer todos los elementos del vector y determinar cu�l es el valor
m�ximo y su posici�n dentro del vector.
 */


#include <iostream>
using namespace std;





int main()
{

    int n[10], mayor, x, indice=0;

     for (x=0; x<10; ++x )

     {
     cout << "Ingrese el Numero: " ;
     cin >> n[x];
     }

     for (x=0; x<10; ++x )
     {

     if (n[x]>mayor)
         {
         mayor= n[x];
         indice=x+1;
         }
     }


       cout << "El mayor es: " << mayor << endl;
       cout << "El indice es: " << indice << endl;


    return 0;
}


