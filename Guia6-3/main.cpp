#include <iostream>

using namespace std;

int main()
{

   int peso, camion = 0, pesoCamion = 0, cantEn=0, nroCamion=0, maxEn=0;


   cout << "Ingrese Peso Encomienda: " ;
   cin >> peso;

   while(peso>0)
   {
   cantEn=1;
   pesoCamion = 0;
   camion++;
     while(peso + pesoCamion<=200 && peso > 0)
       {
        cantEn++;
        pesoCamion +=peso;

        cout << "Ingrese Peso Encomienda: " ;
        cin >> peso;

       }

       if (cantEn > maxEn )
       {
        maxEn = cantEn;
        nroCamion = camion;
       }

    cout << "Camion: " << camion <<" Peso Camion: " << pesoCamion <<" Kg. "<< endl ;
    cout << "**********************" << endl;
  }



    cout << "Camion con mas encomiendas: " << nroCamion <<  " Con cant de encomiendas: " << maxEn << endl ;
    cout << "**********************" << endl;

    return 0;
}









