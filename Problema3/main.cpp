/*El programa recibe una fecha (un mes y un dia) y muestra si la combinacion es valida
Ej: mes: 11 dia: 30 imprime 30/11 es una fecha valida
*/
#include <iostream>

using namespace std;

int main()
{
    int mes, dia;
    cout<<"ingrese un mes: "; cin>>mes;
    while(mes < 1 || mes > 12){
        cout<<mes<<" es un mes invalido"<<endl;
        cout<<"ingrese un mes: "; cin>>mes;
    }
    cout<<"ingrese dia: "; cin>> dia;
    while(dia < 1 || dia > 31){
        cout<<dia<<" es un dia invalido"<<endl;
        cout<<"ingrese dia: "; cin>> dia;
    }
    if(mes == 4 || mes == 6 || mes==9 ||mes==11){
        if(dia > 30){
            cout<<dia<<"/"<<mes<<" no es una fecha valida"<<endl;
        }
        else{
            cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
        }
    }
    if(mes==2){
         if(dia == 29){
            cout<<dia<<"/"<<mes<<" es valido en bisiesto"<<endl;
        }
         if(dia >= 30){
            cout<<dia<<"/"<<mes<<" no es una fecha valida"<<endl;
        }
         if(dia < 29){
          cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
        }
          }
                  if(mes != 2 && mes != 4 && mes != 6 && mes != 9 && mes != 11 ){
                  cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
        }
    return 0;
}
