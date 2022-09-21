#include <iostream>
using namespace std;

int main()
{
//Programa que intercambia los valores de dos variables
    float x=0,y=0,auxiliar=0;
    cout<<"Ingrese el valor de x: "; cin>>x;
    cout<<"Ingrese el valor de y: "; cin>>y;
    cout<<endl<<"Valores Iniciales: ";
    cout<<endl<<"X: "<<x<<"\t"<<"Y: "<<y<<endl;

    auxiliar=x;
    x=y;
    y=auxiliar;

    cout<<endl<<"Valores Intercambiados: ";
    cout<<endl<<"X: "<<x<<"\t"<<"Y: "<<y<<endl;
    
/*Programa que lea las notas de cuatro alumnos y muestre en la 
salida estandar el valor de la nota media de los cuatro alumnos*/

    float Nota1=0,Nota2=0,Nota3=0,Nota4=0,NotaFinal=0;

    cout<<endl<<"Ingrese la nota del alumno 1: "; cin>>Nota1;
    cout<<"Ingrese la nota del alumno 2: "; cin>>Nota2;
    cout<<"Ingrese la nota del alumno 3: "; cin>>Nota3;
    cout<<"Ingrese la nota del alumno 4: "; cin>>Nota4;

    NotaFinal = (Nota1+Nota2+Nota3+Nota4)/4; 

    cout<<endl<<"Nota final media: "<<NotaFinal;

    return 0;
}