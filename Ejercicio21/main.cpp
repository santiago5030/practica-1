/*El programa resive una letra y la cambia de mayuscula a miniscula y viseversa.
Ej: si se ingresa "A", imprime letra convertida: "a"
*/
#include <iostream>

using namespace std;

int main()
{
    char letra,c;
    cout<<"Ingrese una letra: "; cin>>letra;
    if(letra >= 65 && letra <= 90){
        c=letra+32;
    }
    if(letra >= 97 && letra <= 122){
        c=letra-32;
    }
    cout<<"Letra convertida: "<<c<<endl;
    return 0;
}
