/*El programa imprime todos los divisores de un numero N
Ej: si se ingresa el 12 el programa imprime: 1,2,3,4,6,12
*/
#include <iostream>

using namespace std;

int main()
{
   int num,c;
   cout<<"Ingrese numero: "; cin>>num;

   cout<<"Los divisores de "<<num<<" son:"<<endl;

   for(c=1; c<=num; c++){
       if(num%c==0){
           cout<<c<<endl;
       }
   }
    return 0;
}
