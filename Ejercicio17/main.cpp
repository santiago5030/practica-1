/*El programa recibe numeros indefinidamente hasta que se ingrese el cero, donde se imprimira el numero mayor ingresado
Ej: si se ingresa 1,5,8,2,3,0 el programa imprimira, el numero mayor fue: 8
*/
#include <iostream>

using namespace std;

int main()
{
    int num,mayor;
    cout<<"Ingrese numero: ";cin>>num;
    mayor=num;
    while(num!=0){
        if(num> mayor){
            mayor=num;
        }
        cout<<"Ingrese numero: ";cin>>num;

    }
    cout<<"El numero mayor fue: "<<mayor<<endl;
    return 0;
}
