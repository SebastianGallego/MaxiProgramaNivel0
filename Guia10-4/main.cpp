/**  4- Diseñar una función que invierta una cadena de caracteres de una palabra. La
cadena debe estar validada para que contenga una sola palabra.

 */

#include <iostream>
#include <string>
using namespace std;

bool fncCadena(char cadena [20]);




int main()
{

char cadena[20];
bool result;

int i=0, largo=0;


cout << "Ingrese la cadena: " ;  //ingreso la cadena
cin.getline(cadena, 20, '\n');



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


while (largo<19 && cadena[largo]!= '\0')    // busco el largo de la cadena
   {
    ++largo;
   }


   fncInvertir(cadena, largo);



cout << "Cadena Invertida: "  <<  cadena;


return 0;
}












bool fncCadena(char cadena [20]){

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
