/** 4- Diseñar una función que invierta una cadena de caracteres de una palabra.
    La cadena debe estar validada para que contenga una sola palabra.

 */

#include <iostream>
#include <string>
using namespace std;

void invertir(char cadena[20], int largo);

int main()
{

char cadena[20];
bool espacio=false;
int i, contador =0;

cout << "Ingrese la cadena (solo es una palabra): " ;
cin.getline(cadena,20);

  while (contador>0 || espacio==false)
    {
     contador=0;
     for (i=0; i<19; ++i)
       {
        if  (cadena[i] == ' ')
         {
         contador++;
         }
       }
     if (contador > 0)
       {
       cout << "Ingrese la cadena (solo es una palabra): " ;
       cin.getline(cadena,20);
       espacio==true;
       }else{
       contador=0;
       espacio=true;
       }
   }

i=0;

while (cadena[i] != '\0' )  //largo de la palabra
  {
    ++i;
   }

invertir(cadena, i);  //mando la cadena y el largo

return 0;
}


void invertir(char cadena[20], int largo)
{
 char aux[20];
 int x;

 for (x=0; x<largo; ++x)
    {
    aux[x]=cadena[largo-1-x];
    }

cout << endl <<"Cadena Invertida: ";

for (x=0; x<largo; ++x)
    {
    cout << aux[x];
    }
}


