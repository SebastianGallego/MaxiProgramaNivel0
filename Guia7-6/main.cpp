/** Hacer una funci�n que se llame �sumaResta� que reciba dos n�meros y que
devuelva la suma Y la resta del primer n�mero con el segundo.

Nota: recordemos que una funci�n solo puede devolver UN valor por return.
C�mo podr�amos hacer para tener ambos resultados en el main?


 */


#include <iostream>
using namespace std;

void sumaResta (int *n1, int *n2);


int main()
{

    int nro1, nro2;

        cout << "Ingrese el Num1: " ;
        cin >> nro1;

        cout << "Ingrese el Num2: " ;
        cin >> nro2;

        sumaResta (&nro1, &nro2);

        cout << "La suma es: " << nro1 << endl;
        cout << "La la resta es: " << nro2 << endl;


    return 0;
}


void sumaResta (int *n1, int *n2)
{
 int temp1, temp2;

 temp1= *n1;
 temp2= *n2;

 *n1= temp1 + temp2;
 *n2= temp1 - temp2;


}
