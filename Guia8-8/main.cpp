/**

Se ingresa una lista de 20 números en un vector. Se pide ordenar dichos números en forma decreciente (de mayor a menor).

Mostrar el listado ordenado informando también la posición original de cada número en el vector.
Pista: usar ciclos combinados.
 */



#include <iostream>
#include <string>
using namespace std;




int main()
{
    int n[9], pos[9], temp, x, y;


    for (x=0; x<9; ++x) //inicializo con las posiciones del vector
       {
        pos[x] = x+1 ;
       }




    cout << "Ingrese los valores del Vector: " << endl;


     for (x=0; x<9; ++x)
       {
        cin >> n[x] ;
       }

    cout << "Vector cargado Original:     ";

    for (x=0; x<9; ++x)
       {
        cout << n[x] << " / " ;
       }



   for (y=0; y<9; ++y)                       //Ordena el vector y las posiciones
   {
     for (x=0; x<8; ++x)
       {
         if (n[x] < n[x+1] ){
            temp = n[x+1];
            n[x+1] = n[x];
            n[x] = temp;

            temp = pos[x+1];
            pos[x+1] = pos[x];
            pos[x] = temp;
            }
       }
   }

      cout << endl << "Vector Ordenado Decreciente: "  ;
      for (x=0; x<9; ++x)
       {
         cout << n[x] << " / " ;
       }

      cout << endl << "Posiciones Originales Vector: "  ;
      for (x=0; x<9; ++x)
       {
         cout << pos[x] << " / " ;
       }


    return 0;
}


