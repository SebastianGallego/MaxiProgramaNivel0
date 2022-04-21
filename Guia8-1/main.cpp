/** Hacer un programa que solicite 50 números enteros y los guarde en un vector.
Luego recorrer el vector y determinar e informar cuál es la suma de los valores
del mismo.
Nota: usar dos ciclos: uno para guardar los números en el vector y otro para
recorrerlo y leerlo.
 */


#include <iostream>
using namespace std;





int main()
{

    int n[10], suma, x;

     for (x=0; x<10; ++x )

     {
     cout << "Ingrese el Numero: " ;
     cin >> n[x];
     }

     for (x=0; x<10; ++x )

     {
     suma +=n[x];
     }


       cout << "La suma es: " << suma << endl;


    return 0;
}


