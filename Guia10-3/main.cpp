/** 3 - Diseñar una función que valide el ingreso de una cadena de caracteres para que esté formada por una sola palabra,
devolviendo el valor 1 si es válida y 0

 */

#include <iostream>
#include <string>
using namespace std;

bool fncCadena(char cadena [20]);


int main()
{

char cadena[20];
bool result;

int i=0;


cout << "Ingrese la cadena: " ;
cin.getline(cadena, 20, '\n');

result = fncCadena(cadena);

if (result)
  {
   cout << " Es una sola palabra" <<endl;
  }
  else{
    cout << "Son mas de una palabra" <<endl;
  }

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
