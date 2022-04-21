/**
Hacer un programa para ingresar por teclado una palabra y luego contar
cuántas veces aparece el carácter “a” en la misma.

 */

#include <iostream>
#include <string>
using namespace std;

int main()
{

char cadena[20];
int i=0, a=0;

cout << "Ingrese la Palabra: " ;
cin.getline(cadena, 12, '\n');
cout << "Cadena: " << cadena <<endl;

cout << "Cantidad de Letras 'a': ";

while (cadena[i]!= '\0' && i<19)
 {
  if (cadena[i]== 'a')
     {
      ++a;
     }
  ++i;
 }
 cout << a <<endl;
return 0;
}


