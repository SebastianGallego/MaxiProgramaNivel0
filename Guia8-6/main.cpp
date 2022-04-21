/** Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el
vector hay algún elemento repetido. De haberlo, indicarlo con un cartel

aclaratorio “Hay repetidos”, de lo contrario indicar “No hay repetidos”.
Pista: usar ciclos combinados.
 */



#include <iostream>
#include <string>
using namespace std;




int main()
{
    int n[10], x,i,cont=0;

     for (x=0; x<10; ++x)
       {
       cout << "Ingrese el vector: " ;
       cin >> n[x];
       }


     for (x=0; x<10; ++x)
       {
        for (i=0; i<10 ;++i)
        {
         if (n[x] == n[i] && x!=i){
            cont++;
            }
        }
       }

    if (cont>0)
       {
         cout << "Hay valores Repetidos " ;
       }else{
         cout << "NO Hay valores Repetidos " ;
       }

    return 0;
}


