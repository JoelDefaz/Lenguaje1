#include <iostream>         //Libreria estandar C++
using namespace std;        //Facilita la sintaxis

//Funcion de tipo entero
int main()
{
//VARIABLES
    int     entero=15;          //Variables tipo entero
    float   flotante=12.364;    //Variables tipo decimal
    double  fLargo=123.464762;  //Variables tipo decimal mas largo
    char    caracter='a';       //Variables tipo caracter

//IMPRIMIR EN PANTALLA
    cout<<"Hola Mundo... =D"<<endl<<endl;
    cout<<"Variables antes: "<<endl;
    cout<<entero<<endl;
    cout<<flotante<<endl;
    cout<<fLargo<<endl;
    cout<<caracter<<endl;

//LECTURA DE DATOS
    cout<<"Digite un numero entero: "; cin>>entero;
    cout<<"Digite un numero decimal: "; cin>>flotante;
    cout<<"Digite un numero decimal largo: "; cin>>fLargo;
    cout<<"Digite un caracter: "; cin>>caracter;

//IMPRIMIR EN PANTALLA
    cout<<endl<<"Variables despues: "<<endl;
    cout<<entero<<endl;
    cout<<flotante<<endl;
    cout<<fLargo<<endl;
    cout<<caracter<<endl;
    return 0;
}