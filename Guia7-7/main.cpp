/** Hacer una funci�n de tipo void (porque no va a devolver nada) llamada
�positivoNegativoCero� que reciba un n�mero por valor y una variable por
referencia. Que analice el n�mero y escriba variable recibida por referencia
con:
a. 1 si el n�mero es positivo.
b. -1 si el n�mero es negativo.
c. 0 si el n�mero es cero.


Hacer un programa main que permita ingresar 100 n�meros y emitir por
pantalla cu�ntos son positivos, cu�ntos negativos y cu�ntos cero.

 */


#include <iostream>
using namespace std;

void positivoNegativoCero (int numero, int *variable);


int main()
{

    int n, result=0, x, contP=0, contN=0, cont0=0;

     for (x=0; x<10; ++x)
       {

        cout << "Ingrese el Numero: " ;
        cin >> n;
        positivoNegativoCero (n, &result);

        if (result==0)
            {
             cont0++;
            }else if(result > 0)
             {
              contP++;
             } else {
                    contN++;
                    }

        }
       cout << "La cantidad de Nros es " << x << endl;
       cout << "La cantidad de 0 es " << cont0 << endl;
       cout << "La cantidad de Pos es " << contP << endl;
       cout << "La cantidad de Neg es " << contN << endl;


    return 0;
}


void positivoNegativoCero (int numero, int *variable)
{

 if (numero==0 )
  {
    *variable=0;

  }else if (numero > 0)
   {
    *variable=1;
   }else{
         *variable=-1;
          }
}
