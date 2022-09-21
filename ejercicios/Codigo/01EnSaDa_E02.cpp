/*Programa que pida los siguientes datos al usuario y 
mostrarlo en la salida estandar Altura, Sexo, Edad.*/
#include <iostream>
using namespace std;

int main()
{
    char sexo[10];
    int edad=0;
    float altura=0;

    cout<<"------Salida------"<<endl<<endl;
    cout<<"Ingrese su edad(anios): "; cin>>edad;
    cout<<"Ingrese su sexo: ";cin>>sexo;
    cout<<"Ingrese su altura(m): "; cin>>altura;

    cout<<endl<<"---Usuario XX---"<<endl<<endl;
    cout<<"Su edad es: "<<edad<<" anios"<<endl;
    cout<<"Su sexo es: "<<sexo<<endl;
    cout<<"Su altura es: "<<altura<<" metros"<<endl;
    return 0;
}