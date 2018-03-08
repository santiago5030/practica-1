/*El programa recibe un numero impar n y calcula la suma de las diagonales de una espiral nxn
Ej: si se ingrese el 3, el program debe imprimir, En una espiral 3x3, la suma es: 25
*/

#include <iostream>

using namespace std;

int main()
{
    int impar,d=2,num=1,sum=1,c,n=3;
    cout<<"ingrese un numero impar: "; cin >> impar;
    while(impar%2 != 1){
        cout<<"El numero no es impar, ingrese un impar: "; cin>>impar;
    }
    while(n <= impar){
        for(c=1; c <= 4; c++){
            num=num+d;
            sum=sum+num;
        }
        d+=2;
        n+=2;
    }
    cout<<"En una espiral "<<impar<<"x"<<impar<<", la suma es: "<<sum<<endl;
    return 0;
}
