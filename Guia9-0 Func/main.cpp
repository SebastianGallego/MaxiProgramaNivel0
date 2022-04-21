/**
Una empresa que fabrica 20 artículos tiene la siguiente información para cada uno de ellos:
- Código de Artículo (4 dígitos, no correlativos).
- Precio Unitario.
Este primer lote no se encuentra ordenado.

Cuenta por otro lado con un lote de registros con las ventas del año anterior. Cada registro contiene la siguiente información:
- Número de Cliente (1 a 300).
- Código de Artículo (4 dígitos no correlativos).
- Mes (1 a 12).
- Día (1 a 31).
- Cantidad vendida.
Puede haber más de un registro para el mismo artículo. El lote finaliza con un registro con número de cliente igual a cero.

Se pide:

a)Un listado con el siguiente formato:

CódigoDeArtículo | CantidadTotalVendida
              9                |             999

Este listado debe salir ordenado de mayor a menor por cantidad total vendida.


b) Informar, si los hubiera, los nombres de los meses en que no hubo ventas.

c) Informar los códigos de los artículos cuyas ventas en cantidad son mayores al promedio.
 */



#include <iostream>
#include <string>
using namespace std;

void cargarLote (int codArt[5], float precioU[5]);

void ponerCeros(int largo, int vect[]);

void procesoLote(int codArt[5], float precioU[5], int accuCant[5], int accuMes[12]);





int main()
{
    int  x, y, temp ;
    int codArt[5], accuCant[5], accuMes[12], promedio, vtaTotal=0;
    float precioU[5];



     ponerCeros(12, accuMes);  // Inicializo el Acumulador de Cantidad

     ponerCeros(5, accuCant);   // Inicializo el Acumulador de ventas del mes


     cargarLote (codArt, precioU); //funcion Cargar el Lote - Ingreso los 10 articulos


     procesoLote(codArt, precioU, accuCant, accuMes);  //Funcion Proceso de Lote





    //A-  Ordena por cantidad de  mayor a menor las ventas con sus codigos

    for (y=0; y<4; ++y)
     {
     for (x=0; x<5; ++x)
       {
         if (accuCant[x] < accuCant[x+1] ){
            temp = accuCant[x+1];
            accuCant[x+1] = accuCant[x];
            accuCant[x] = temp;

            temp = codArt[x+1];
            codArt[x+1] = codArt[x];
            codArt[x] = temp;
            }
       }
     }

    //Muestro con el formato
         cout <<endl << "Codigo Art: / Ventas Acumuladas" <<endl;
         for (x=0; x<5; ++x)
         {
          cout << codArt[x] << " / " << accuCant[x] << endl;
          vtaTotal += accuCant[x];
         }

         promedio= vtaTotal / 5;

        //Ventas Meses

         cout <<endl << "Cantidad de Ventas de cada Mes: " <<endl;
         for (x=0; x<12; ++x)
         {
          cout << accuMes[x] << " / " ;
         }

   //B- Informar, si los hubiera, los nombres de los meses en que no hubo ventas

   cout <<endl << "B - Meses sin ventas:" <<endl;
   for (x=0; x<12; ++x)
       {
        if (accuMes[x] == 0)  //si en el mes no se vendio nada
         {
           switch(x){

           case 0: cout << "Enero " << endl; break;
           case 1: cout << "Febrero " << endl; break;
           case 2: cout << "Marzo " << endl; break;
           case 3: cout << "Abril " << endl; break;
           case 4: cout << "Mayo " << endl; break;
           case 5: cout << "Junio " << endl; break;
           case 6: cout << "Julio " << endl; break;
           case 7: cout << "Agosto " << endl; break;
           case 8: cout << "Septiembre" << endl; break;
           case 9: cout << "Octubre " << endl; break;
           case 10: cout << "Noviembre" << endl; break;
           case 11: cout << "diciembre " << endl; break;
           }
          }
       }


   //C- Informar los códigos de los artículos cuyas ventas en cantidad son mayores al promedio.
      cout <<endl << "C- Codigo Art con ventas mayores al promedio" <<endl;
         for (x=0; x<5; ++x)
         {

          if (accuCant[x] > promedio){
              cout << codArt[x] <<  endl;
              }
          }



    return 0;
}


void cargarLote (int codArt[5], float precioU[5] )
{
  int x;

  // Ingreso los 10 articulos
     for (x=0; x<5; ++x)
       {
        cout << "Ingrese Codigo de Articulo: ";
        cin >> codArt[x] ;
        cout << "Ingrese Precio Unitario: ";
        cin >> precioU[x] ;
      }
}

void procesoLote(int codArt[5], float precioU[5], int accuCant[5], int accuMes[12] ){

int  x, nroC, codA, mes, dia, cantV, ind ;



// Ingreso la Venta: NroCliente, CodArt, mes, dia, cantVendida
        cout << "Ingrese el Nro de Cliente: ";
        cin >> nroC ;
        cout << "Ingrese Codigo de Articulo: ";
        cin >> codA ;
        cout << "Ingrese el Mes: ";
        cin >> mes ;
        cout << "Ingrese el Dia: ";
        cin >> dia ;
        cout << "Ingrese la Cantidad Vendida: ";
        cin >> cantV ;


     //cargo mientras el Nro de Cliente NO sea igual a cero
        while (nroC !=0)
        {

         //Busco el indice del codigo cargado y acumulo las ventas
         for (x=0; x<5; ++x)
         {
          if (codArt[x] == codA )
           {
           ind = x;
           }
         }
        accuCant[ind] += cantV;  //Acumulo la cantidad vendida del codigo ingresado en su posicion
        accuMes[mes-1] += cantV;  //Acumulo la cantidad vendida del mes

        cout << "Ingrese el Nro de Cliente: ";
        cin >> nroC ;
        cout << "Ingrese Codigo de Articulo: ";
        cin >> codA ;
        cout << "Ingrese el Mes: ";
        cin >> mes ;
        cout << "Ingrese el Dia: ";
        cin >> dia ;
        cout << "Ingrese la Cantidad Vendida: ";
        cin >> cantV ;
        }
}


void ponerCeros(int largo, int vect[]){

 int x;

     for (x=0; x<largo; ++x)
       {
        vect[x] = 0;
       }
}
