/** Hacer una función llamada “pagos” que reciba un monto (float) y una cantidad
de pagos (entero) y devuelva el monto de cada pago.


Hacer un programa para
ingresar 10 ventas. Para cada venta se conoce el monto y la cantidad de pagos.
El programa deberá mostrar la cantidad de pagos y el monto del pago para
cada una de las ventas.
 */


#include <iostream>
using namespace std;

float pagos (float monto, int cantPagos);


int main()
{

    int x, cantPagos;
    float monto, cuota;

     for (x=0; x<10; ++x)
      {
        cout << "Ingrese el Monto: " ;
        cin >> monto;

        cout << "Ingrese Cantidad de Pagos: " ;
        cin >> cantPagos;

        cuota = pagos (monto, cantPagos);

        cout << "A Pagar " << cantPagos << " Cuotas de: $ " << cuota << endl << endl;

     }



    return 0;
}


float pagos (float monto, int cantPagos)
{
  float cuota;

  cuota= monto / cantPagos;

  return cuota;

}
