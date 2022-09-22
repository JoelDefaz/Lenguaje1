#include <iostream>
using namespace std;

int main()
{
//Programa que lea 2 numeros y determine el mayor de ellos
    float numero1=0,numero2=0;

    //cout<<"Ingrese dos numeros: "<<endl;   cin>>numero1>>numero2; (Mas simplificado)
    cout<<"Ingrese un primer numero: "; cin>>numero1;
    cout<<"Ingrese un segundo numero: "; cin>>numero2;

    if (numero1==numero2)
    {
        cout<<"Ambos numeros son iguales";
    }
    else if(numero1>numero2)//Se pregunta la condicion si no se ha cumplido la anterior
    {
        cout<<"El mayor numero es: "<<numero1;
    }
    else
    {
        cout<<"El mayor numero es: "<<numero2;
    }

//Programa que lea 2 numeros y determine el mayor de ellos
    float n1,n2,n3;

    cout<<endl<<endl<<"Ingrese tres numeros"<<endl;
    cin>>n1>>n2>>n3;

    if (n1>n2 && n1>n3) //  && Operador de Conjuncion (y)
    {
        cout<<"El mayor es "<<n1;
    }
    else if(n2>n1 && n2>n3)
    {
        cout<<"El mayor es "<<n2;
    }
    else if((n1==n2)&&(n2==n3))
    {
        cout<<"Los 3 numeros son iguales";
    }
    else
    {
        cout<<"El mayor es "<<n3;
    }
    return 0;
}