/* El programa recibe un numero y calcula la suma de todos los numeros pares en la serie de fibonacci menores a n
Ej: si se ingresa 35 se debe imprimir, El resultado de la suma es: 44
*/

#include <iostream>

using namespace std;

int main()
{
    int numero,n1=1,n2=1,n3=0,sum=0;
    cout<<"ingrese un numero: "; cin >> numero;
    while((n1+n2) < numero){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if(n3%2==0){
            sum=sum+n3;
        }
    }
    cout<<"El resultado de la suma es: "<<sum<<endl;
    return 0;
}
