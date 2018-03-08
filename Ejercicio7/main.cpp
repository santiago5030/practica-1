/*El programa imprime la sumatoria de los numeros desde 0 hasta N
Ej: si se ingresa 8 se debe imprimir. la sumatoria desde 0 hasta 8 es: 36
*/
#include <iostream>

using namespace std;

int main()
{
    int num,cont,sum=0;

    cout<<"Ingrese un numero: "; cin>>num;
    cont=0;
    while(cont<=num){
        sum+=cont;
        cont++;
    }
    cout<<"La sumatoria desde 0 hasta "<<num<<" es: "<<sum<<endl;
    return 0;
}
