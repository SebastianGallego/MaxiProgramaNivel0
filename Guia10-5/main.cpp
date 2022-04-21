/** 5 - Diseñar una función que devuelva 1 si una palabra dada está, o 0 si no está
contenida en una cadena de caracteres también dada.

 */

#include <iostream>
#include <string>
using namespace std;

bool fncBusca(char cadena [20], char palabra[10]);




int main()
{

char cadena[20];
char palabra[10];

bool result;

int i=0, largo=0;


cout << "Ingrese la cadena: " ;  //ingreso la cadena
cin.getline(cadena, 20, '\n');


cout << "Ingrese la palabra a buscar: " ;  //ingreso la palabra a buscar
cin.getline(palabra, 20, '\n');




 result = fncBusca(cadena, palabra);  //busca si la palabra está dentro de la cadena






   if (result)
     {
      cout << endl <<" La palabra buscada esta dentro de la cadena" <<endl;
      }
      else{
         cout <<  endl <<"No se encontro la palabra en la cadena" <<endl;

          }

return 0;

}


bool fncBusca(char fcadena [20], char fpalabra[10]){

bool result=false;
int i=0, j=0, largoPalabra=0, largoCadena=0;


while (largoCadena<19 && fcadena[largoCadena]!= '\0')    // busco el largo de la palabra
   {
    ++largoCadena;
   }


while (largoPalabra<9 && fpalabra[largoPalabra]!= '\0')    // busco el largo de la palabra
   {
    ++largoPalabra;
   }


   for (j=0; j<largoCadena; ++j)
       {
        if (fpalabra[i]==fcadena[j])
          {
           i++;
          }
       }

if (i==largoPalabra)
    {
    result=true;
    }


return result;
}
