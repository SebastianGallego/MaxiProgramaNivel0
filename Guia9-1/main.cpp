/**

Se dispone de un lote de 300 registros (uno por artículo), cada uno de los cuales tiene la
siguiente información:

- Número de artículo (4 dígitos no correlativos).
- Cantidad de unidades en stock.
- Precio Unitario.

El lote está desordenado.


Se dispone de otro lote de registros, cada uno de los cuales corresponde a una venta con la siguiente información:

- Número de cliente (1 a 300).
- Número de artículo (4 dígitos, no correlativos).
- Cantidad de unidades vendidas.

El último registro de este lote tiene número de cliente cero y no debe procesarse. Desarrollar el
programa que determine e imprima:

a) Un listado de las ventas realizadas, con el siguiente formato:

Listado de ventas

Nro. Cliente Nro. Artículo Cantidad Vendida Importe Total
99                 99 9           99             999.99

b) Informar cuál es el número de cliente que más compró en total (en pesos).

c) Informar cada uno de los números de los artículos que no hayan registrado ventas.


 */



#include <iostream>
#include <string>
using namespace std;

void cargarLote(int nroArt[5], int stock[5], float precio[5]);

void cargarVentas(int nroArt[5], int stock[5], float precio[5], float accuVentas[5], bool vtaCliente[]);

void puntoB (float accuVentas[5]);

void puntoC (bool vtaCliente[5]);



int main()
{
 int nroArt[5],  stock[5], i=0;
 float precio[5], accuVentas[5];
 bool vtaCliente[5]; //vector de bandera para saber si tienen alguna venta

    for (int x=0; x<5; ++x)   //inicializo el acumulador
      {
        accuVentas[x]=0;
        vtaCliente[x]=0;
       }



 cargarLote(nroArt, stock, precio);

 cargarVentas(nroArt, stock, precio, accuVentas, vtaCliente );

 puntoB(accuVentas);

 puntoC(vtaCliente);


 return 0;
}




void cargarLote (int nroArt[5], int stock[], float precio[5]){

for (int x=0; x<5; ++x)
 {
   cout << "Ingrese nro de Articulo: ";
   cin >> nroArt[x] ;
   cout << "Ingrese Stock del Articulo: ";
   cin >> stock[x] ;
   cout << "Ingrese el Precio: ";
   cin >> precio[x] ;
 }
}


void cargarVentas(int nroArt[5], int stock[5], float precio[5], float accuVentas[5], bool vtaCliente[]){


int  x, nroC, nArt, ventas, i  ;
float impTotal ;


        cout << "Ingrese el Nro de Cliente: ";
        cin >> nroC ;
        cout << "Ingrese Nro de Articulo: ";
        cin >> nArt ;
        cout << "Ingrese las ventas: ";
        cin >> ventas ;



     //cargo mientras el Nro de Cliente NO sea igual a cero
        while (nroC !=0)
        {

         for (x=0; x<5; ++x)    //busco el indice del numero de articulo cargado
         {
            if (nroArt[x] == nArt)  i = x;
          }
        impTotal =  ventas * precio[i];



        // "A"
        cout << "NroC ! NroArt !  Cant.Venta  !  Imp.Total" << endl;
        cout << nroC << "       "  << nArt << "       "  << ventas  << "       " << impTotal  << endl;



        // "B"  número de cliente que más compró en total (en pesos)
        accuVentas[nroC-1] += impTotal;

        // "C"
        vtaCliente[nroC-1] = true;


        cout << endl <<"Ingrese el Nro de Cliente: ";
        cin >> nroC ;
        cout << "Ingrese Nro de Articulo: ";
        cin >> nArt ;
        cout << "Ingrese las ventas: ";
        cin >> ventas ;
        }


}

void puntoB (float accuVentas[5])
{
 int i;
 float  maxVenta=0 ;

for (int x=0; x<5; ++x)   // "B"  número de cliente que más compró en total (en pesos)
       {
        if (accuVentas[x] > maxVenta)
           {
             maxVenta = accuVentas[x];
             i = x + 1;
            }

       }

   cout << endl << "El cliente que mas vendio es: " << i << " y el total es: " <<  maxVenta << endl ;
}


void puntoC (bool vtaCliente[5])

{

// "C" Informar cada uno de los números de los artículos que no hayan registrado ventas


   for (int x=0; x<5; ++x)
      {
       if (vtaCliente[x] == false)
           cout << endl << "El cliente " << x + 1  << " No vendio nada " << endl ;
      }
}
