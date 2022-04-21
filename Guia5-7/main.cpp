#include <iostream>

using namespace std;

int main()
{


    int nro, max=0, pos=0 ;



    cout << "Ingrese un Nro: "  ;
    cin >> nro;


    while (nro != 0)
    {
        if (nro>max)
        {
            max=nro;
            pos++;
        }

    cout << "Ingrese un Nro: "  ;
    cin >> nro;



    }

 cout << "Max: " << max << endl;
 cout << "Pos: " << pos << endl;



    return 0;
}
