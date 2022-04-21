/* ** 6 - Diseñar una función que devuelva la cantidad de veces que un carácter dado
está contenido en una palabra también dada.

La cadena de caracteres debe
estar validada para que contenga sólo una palabra.

 */

#include <iostream>
#include <string>
using namespace std;

bool fncCadena(char cadena [20]);  //Busca espacios para saber si es una palabra

int fncCuenta(char cadena [20], char letra);   //cuenta la cantidad de letras



int main()
{

char cadena[20];
char letra;
bool result;
int i=0, largo=0, contador=0;


cout << "Ingrese la cadena: " ;  //ingreso la cadena
cin.getline(cadena, 20, '\n');

cout << "Ingrese la letra a cantar: " ;  //ingreso la letra
cin >> letra;

 result = fncCadena(cadena);  //busca si tiene espacios

while (!result)   //Repite hasta que sea una sola palabra
   {

   if (result)
     {
      cout << " Es una sola palabra" <<endl;
      }
      else{
         cout << "Son mas de una palabra" <<endl;
         cout << "Ingrese la cadena: " ;
         cin.getline(cadena, 20, '\n');
         result = fncCadena(cadena);
          }
   }


contador=fncCuenta(cadena, letra);
cout << "Cantidad de Letras: " << contador;



return 0;

}



bool fncCadena(char cadena [20]){   //Busca espacios para saber si es una palabra

bool result;
int i=0;

while (i<19)
  {
   if (cadena[i]== ' ')
     {
       result = false;
        i=20;
        }
        else{
           result = true;
        }
     ++i;
  }

return result;
}



int fncCuenta (char fcadena [20], char letra){


int i=0, contador=0;


   for (i=0; i<20; ++i)
       {
        if (fcadena[i]==letra)
          {
           contador++;
          }
       }

return contador;
}



