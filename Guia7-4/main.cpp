/**
 Hacer una funci�n llamada �primo� que reciba un n�mero entero y devuelva 1
si el n�mero es primo o cero si no lo es.

Hacer un programa para ingresar
n�meros. El lote corta cuando se ingresa un n�mero cero. Informar el
promedio teniendo en cuenta s�lo los n�meros primos.
 */



#include <iostream>

using namespace std;

int primo (int a);


int main()
{

    int n, cont=0, contPrimo=0;

        cout << "Ingrese el Nro: " ;
        cin >> n;

      while(n!=0)
      {
        n= primo(n);
        cont++;

        if (n==1)
           {
           contPrimo++;
           }

        cout << "Ingrese el Nro: " ;
        cin >> n;
      }

      cout << "Cantidad de nros: " << cont << endl;
      cout << "Cantidad de nros Primos: " << contPrimo << endl;
      cout << "Promedio de nros Primos: " << cont / contPrimo << endl;



    return 0;
}


int primo (int a)
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
          return 1;
           }
            else{
                return 0;
            }

}
