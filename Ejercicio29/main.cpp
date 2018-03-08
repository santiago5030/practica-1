/*El programa muestra numeros aleatorios para adivinar un numero seleccionado por el usuario
donde el usuario debe indicar si el numero es mayor o menor que el que se muestra */

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char rpt= 32;
    int n,li=0,ls=100;
    srand(time(NULL));
    while(rpt != 61){
        n= li + rand()% ((ls+1)-li);
        cout<<n<<" es mayor o menor que tu numero?: "; cin>>rpt;
        while(rpt != 62 && rpt != 60 && rpt != 61){
            cout<<"la respuesta es invalida, ingresala de nuevo: "; cin>>rpt;
        }
        if(rpt== 60){
            li=n;
        }
        if(rpt==62){
            ls=n;
        }
    }
    cout<<"El numero es "<<n<<endl;
    return 0;
}

