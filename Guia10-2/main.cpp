/**
Hacer un programa que solicite una cadena de caracteres, una posición y un
carácter y que emita en pantalla la cadena con el carácter insertado en la
posición dada. Ejemplo:

• Cadena original: hola como ests
• Carácter: a
• Posición: 14
• Cadena resultado: hola como estas
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{

char cadena[20], aux[20], letra;

int i=0, j=0, pos=0;


cout << "Ingrese la Palabra: " ;
cin.getline(cadena, 20, '\n');

cout << "Ingrese la letra a insertar: " ;
cin >> letra;

cout << "Ingrese la Posicion a insertar: " ;
cin >> pos;


cout << "Agrego la letra: ";

i=pos-1;

while (cadena[i]!= '\0' && i<19)   //copio desde posicion en adelante en la cadena en auxiliar
 {
  aux[j] = cadena[i];
  ++i;
  ++j;
 }

cadena[pos-1]=letra;  //Agrego la letra


i=pos;
j=0;

while (cadena[i-1]!= '\0' && i<19)   //copio desde posicion en adelante en la cadena en auxiliar
 {
  cadena[i] = aux[j];
  ++i;
  ++j;
 }
cout << cadena <<endl;

return 0;
}

