//El programa recibe dos numeros e imprime el valor de la division redondeada Ej: 8/3=3

#include <iostream>

using namespace std;

int main()
{
int n1,n2,div;
float div2;

    cout<<"Ingrese un numero: "; cin>>n1;
    cout<<"Ingrese un numero: "; cin>>n2;

    div= n1/n2;
    div2= float(n1)/n2;

    if(div2-div >= 0.5){
        div++;
        cout<<n1<<"/"<<n2<<"="<<div<<endl;
    }
    else{
        cout<<n1<<"/"<<n2<<"="<<div<<endl;
    }
    return 0;
}
