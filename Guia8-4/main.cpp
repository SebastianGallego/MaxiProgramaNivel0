/** Dada una lista de 10 números enteros, cargarlos en un vector.

Luego, determinar e informar si el vector está ordenado en forma creciente.
Por ejemplo el vector con los valores 1, 3, 5, 7 y 9 está ordenado; el vector 1, 5, 3, 7 y 9 no lo está.
 */



#include <iostream>
using namespace std;




int main()
{

    int n[10], x, cont=0 ;

     for (x=0; x<10; ++x )
       {
        cout << "Ingrese el Numero: " ;
        cin >> n[x];

       }


     for (x=0; x<10; ++x )
       {
         if (n[x+1]>n[x])
         {
         cont++;
         }
     }

      if (cont==x-1) {
       cout << "El vector esta ordenado "  << endl;
             } else{
               cout << "El vector no esta ordenado "  << endl;
             }


    return 0;
}


