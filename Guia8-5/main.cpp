/** Hacer un programa que solicite una serie de valores de tipo char (caracteres).
Se entiende por car�cter a cada elemento que se obtiene de presionar una
tecla. Por ejemplo el valor �25� tiene dos caracteres (si quisi�ramos guardarlo
en variables enteras nos alcanza con una, pero si queremos guardarlo en
variables char, necesitaremos dos); la frase �maxi programa� tiene 13 (se
incluye el espacio como un car�cter).

La cantidad de valores ser� como m�ximo 50, pero el programa puede cortar
antes si se ingresa el car�cter �.� (punto). Una vez cargado el vector de char,
recorrerlo y reemplazar todas las apariciones de la letra �a� por la letra �e�,
por ejemplo:
Vector char original: �Hola muchachada c�mo est�n�.
Vector char modificado: �Hole muchechede c�mo esten�
Finalmente, mostrar el resultado en pantalla.
Nota: necesitaremos un vector char de 50, pero no lo cargaremos con un For.

 */



#include <iostream>
#include <string>
using namespace std;




int main()
{
    char cadena[50];
    int x=0, i=0 ;

       cout << "Ingrese el vector: " ;
       cin >> cadena[x];



      while (cadena[x] != 46 && x<50)
        {
         ++x;
         cin.get (cadena[x]);
         }


     cout << "Vector Modificado a x e: " ;

     for (i=0; i<x; ++i)
       {
        if (cadena[i]==97)
          {
           cout << "e";
          }else {
          cout << cadena[i];
          }

       }

    return 0;
}


