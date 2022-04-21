/* ** 7 - Hacer una función que reciba una cadena de caracteres y devuelva la cantidad
real de caracteres en la misma (hasta el \0).



 */

#include <iostream>
#include <string>
using namespace std;


int fncCuenta(char cadena [20]);   //cuenta el largo



int main()
{

char cadena[20];
int largo=0;


cout << "Ingrese la cadena: " ;  //ingreso la cadena
cin.getline(cadena, 20, '\n');


largo = fncCuenta(cadena);  //Cuenta el largo de la cadena

cout << "Cantidad de Letras: " << largo;

return 0;

}


int fncCuenta (char fcadena [20]){

int largo=0;

while (largo<19 && fcadena[largo]!= '\0')    // busco el largo de la palabra
   {
    ++largo;
   }

return largo;
}



