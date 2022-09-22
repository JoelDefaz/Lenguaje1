#include <iostream>
using namespace std;

int main()
{
/*Programa que solicita la edad(entero) del usuario e 
indique si la edad esta en el rango de 18 a 25 años*/
    int edad;
    cout<<"Indique su edad: "; cin>>edad;

    if (edad<18 || edad>25)// || Condicional de disyuncion "o" 
    {
        cout<<"Su edad esta fuera del rango de [18-25]";
    }
    else
    {
        cout<<"Su edad esta dentro del rango de [18-25]";
    }

/*Programa que lea 3 numeros, luego debe leer otro numero y verificar si 
este nuevo numero coincide con algun otro ingresado anteriormente*/
    float n1,n2,n3,n4;
    cout<<endl<<"Ingrese 3 numeros:"<<endl;
    cin>>n1>>n2>>n3;

    cout<<"Ingrese un cuarto numero: ";cin>>n4;

    if ((n4==n1)||(n4==n2)||(n4==n3))
    {
        cout<<"El numero ingresado ya ha sido registrado";
    }
    else
    {
        cout<<"Numero ingresado correctamente";
    }

    return 0;
}