#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout<<"Digite un numero: "; cin>>numero;

    if(numero==0)
    {
        cout<<"El numero es cero";
    }    
    else if (numero%2==0)// %2 Es el residuo de dividir para 2 
    {
        cout<<"El numero es par";
    } 
    else
    {
        cout<<"El numero es impar";
    }

//Programa que verifica si un numero es positivo o negativo
    int valor;

    cout<<endl<<"Digite un numero: "; cin>>valor;

    if(valor>0)
    {
        cout<<"El numero es positivo";
    }
    else
    {
        cout<<"El numero es negativo";
    }
    return 0;
}