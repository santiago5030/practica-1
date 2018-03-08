/*El programa dice la cantidad de digitos de un numero entero positivo.
Ej: si se ingresa el 547, se imprime 547 tiene 3 digitos
*/
#include <iostream>

using namespace std;

int main()
{
    int num,num2, digits=0;
    cout<<"Ingrese un numero: "; cin >> num;
    num2=num;
    while(num >=1){
        num=num/10;
        digits++;
    }
    cout<<num2<<" tiene "<<digits<<" digitos"<<endl;
    return 0;
}
