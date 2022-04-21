// Prog pide Lote de 10 nros, cada lote corta con un 0
// Maximo de Cada lote
// Minimo de cada lote
// Promedio de cada lote
// Maximo Total
// Minimo Total
// Promedio total
// Cant Lote
// Cantidad Total

#include <iostream>

using namespace std;

int main()
{

  int x, nro, maxLote, minLote, promLote, maxTotal=0,minTotal=0, promTotal;
  int cantLote=0, cantTotal=0, sumaLote=0, sumaTotal=0;





  for (x=0; x<3; ++x)

  {
   cout << "Ingrese un Nro: " ;
   cin >> nro;

   maxLote = nro;
   minLote = nro;
   cantLote = 1;
   promLote = 0;
   sumaLote = 0;



    while (nro!=0)
      {
           cantLote++;
           if(nro > maxLote)
                 {
                  maxLote = nro;
                 }

           if(nro < minLote)
                 {
                  minLote = nro;
                 }

           sumaLote += nro;

      cout << "Ingrese un Nro: " ;
      cin >> nro;
      }

      promLote = sumaLote / (cantLote-1);
      cout << "--------------------------------" << endl;
      cout << "Maximo del Lote " << x +1 <<  ": " << maxLote << endl;
      cout << "Minimo del Lote " << x +1 <<  ": " << minLote << endl;
      cout << "Cantidad del Lote " << x +1 <<  ": " << cantLote - 1 << endl;
      cout << "Promedio del Lote " << x +1 <<  ": " << promLote << endl << endl;
      cout << "********************************" << endl;

    cantTotal = cantTotal + cantLote - 1;
    if (maxLote > maxTotal)
        {
         maxTotal = maxLote;
        }

    if (minLote < minTotal)
        {
        minTotal = minLote;
        }




  } //Termina el For

  promTotal = cantTotal / 3;

      cout << "-------Resultado Final  ---------" << endl;
      cout << "Maximo Total: " << maxTotal << endl;
      cout << "Minimo Total: " << minTotal << endl;
      cout << "Cantidad Total: " << cantTotal  << endl;
      cout << "Promedio Total: " << promTotal << endl;
      cout << "********************************" << endl;


    return 0;
}
