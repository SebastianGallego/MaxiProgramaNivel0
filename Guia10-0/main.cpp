/**


 */



#include <iostream>
#include <string>
using namespace std;





int main()
{

char cadena[12];
int i=0;

cout << "Ingrese la cadena: " ;
cin.getline(cadena, 12, '\n');
cout << "Cadena: " << cadena <<endl;


cout << "Cadena con While: ";

while (cadena[i]!= '\0' && i<11)
 {
  cout << cadena[i] ;
  ++i;
 }





 return 0;
}

