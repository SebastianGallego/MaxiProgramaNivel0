/** Una empresa comercializa 15 tipos de art�culos y por cada venta realizada
genera un registro con los siguientes datos:

� N�mero de art�culo (1 a 15).
� Cantidad vendida.

Puede haber varios registros para el mismo art�culo y el �ltimo se indica
n�mero de art�culo igual a cero.

Se pide determinar e informar:
a. El n�mero de art�culo que m�s se vendi� en total.
b. Los n�meros de art�culos que no registraron ventas.
c. La cantidad de unidades vendidas para el art�culo n�mero 10.

Nota: tener en cuenta el concepto de �registro� y el planteo de estructura
principal separado de consignas (ver videos de ciclos combinados y ejercicios
resueltos de ciclos combinados).
 */



#include <iostream>
#include <string>
using namespace std;




int main()
{
    int nArt, cantV, cont=0, x, maximo=0, artMax=0;
    int accu[15];

     for (x=0; x<15; ++x)  //inicializo el acumulador de ventas de cada articulo
      {
       accu[x]=0;
      }


     cout << "Ingrese Nro Articulo: " ;
     cin >> nArt;
     cout << "Ingrese Cant. Ventas: " ;
     cin >> cantV;

     while (nArt != 0)
     {

     accu[nArt-1]+= cantV;    //acumula la cantidad vendida en la posicion del articulo ingresado



     cout << "Ingrese Nro Articulo: " ;
     cin >> nArt;
     cout << "Ingrese Cant. Ventas: " ;
     cin >> cantV;

     }

     //a. El n�mero de art�culo que m�s se vendi� en total.
     for (x=0; x<15; ++x)
       {
         if (accu[x] > maximo ){
            maximo = accu[x];
            artMax = x+1;
           }
       }

      cout << "Art de mayor venta: " << maximo << endl ;
      cout << "Art de mayor venta: " << artMax << endl ;


      //b. Los n�meros de art�culos que no registraron ventas.
      for (x=0; x<15; ++x)
       {
         if (accu[x] == 0 ){
            cout << "Art sin ventas: " << x+1 << endl ;
           }
       }

      //La cantidad de unidades vendidas para el art�culo n�mero 10.
         cout << "Ventas totales del Art. 10: " << accu[9] << endl ;


    return 0;
}


