/**
 Hacer una funci�n llamada �producto� que reciba dos n�meros enteros y que
 devuelva el producto de ambos. Luego hacer un programa que pida el precio
 de un art�culo y la cantidad vendida y muestre por pantalla el monto total a
 pagar. Usar la funci�n.
 */



#include <iostream>

using namespace std;

int producto(int a, int b);


int main()
{

    int precio, cant, mult;


        cout << "Ingrese el Precio: " ;
        cin >> precio;
        cout << "Ingrese la cantidad: ";
        cin >> cant;

        mult = producto(precio,cant);

        cout << "El producto es: " << mult;


    return 0;
}


int producto(int a, int b)
{
    int c;

    c= a * b;
    return c;

}
