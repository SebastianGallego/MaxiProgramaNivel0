/**
 Hacer una funci�n llamada �par� que reciba un n�mero entero y devuelva 1 si
es par o cero si no lo es. Hacer un programa para ingresar 20 n�meros y
mostrar por pantalla cu�ntos son pares.
 */



#include <iostream>

using namespace std;

int par (int a);


int main()
{

    int n, pares=0, x;

        for (x=0; x<20; ++x)
        {
        cout << "Ingrese el Nro: " ;
        cin >> n;
        n = par (n);

          if (n==1)
            {
             pares++;
            }
        }
        cout << "La cantidad de pares es: " << pares;
    return 0;
}


int par (int a)
{
    if (a%2 == 0)
       {
        a=1;
       } else
         {
          a=0;
         }

    return a;

}
