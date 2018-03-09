/* El programa calcula el minimo comun multiplos de los numeros de 1 hasta n
 Ej: si se ingresa 5 se debe imprimir, el minimo comun multiplo es: 60
 */

#include <iostream>

using namespace std;

int main()
{
    int n,c,mcm=1;
    cout<<"ingrese un numero: "; cin >>n;
    for(c=1; c <=n; c++){
        if(mcm%c != 0){
            mcm++;
            c=1;
        }
    }
    cout<<"El minimo comun multiplo es: "<<mcm<<endl;
    return 0;
}
