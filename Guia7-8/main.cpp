/** Hacer un programa que permita ingresar una lista de números que corta
cuando se ingresa un cero. A partir de dichos datos informar:

a. El mayor de los números pares.
b. La cantidad de números impares.
c. El menor de los números primos.

Hacer uso de las funciones anteriormente desarrolladas.
 */


#include <iostream>
using namespace std;

bool Par (int numero);
bool Primo (int numero);



int main()
{

    int n, maxPar=0, cantImpar=0, menorPrimo=0 ;

     cout << "Ingrese el Numero: " ;
     cin >> n;



     while (n!=0)
       {
        if (Par(n))   //es par?
           {
            if (n>maxPar)
              {
               maxPar = n;
              }
            }
            else{    //Si es impar
                  cantImpar++;
                 }

        if (Primo(n))  //es Primo?
          {

           if (menorPrimo==0)
              {
               menorPrimo=n;
              }

           if (n < menorPrimo )
              {
               menorPrimo = n;
              }
           }

        cout << "Ingrese el Numero: " ;
        cin >> n;
        }

       cout << "El mayor de los Nros Pares es: " << maxPar << endl;
       cout << "La cantidad de Impares es: " << cantImpar << endl;
       cout << "El menor de los Primos es: " << menorPrimo << endl;


    return 0;
}


bool Par (int numero)
{

 if (numero %2 == 0 )
  {
     return true;
   }else{
        return false;
        }

}



bool Primo (int a)
{
    int x, cont=0;

    for (x=1; x <= a; x++)
        {
        if (a%x == 0)
          {
          cont++;
           }
        }

     if (cont == 2)
          {
          return true;
           }
            else{
                return false;
            }

}

