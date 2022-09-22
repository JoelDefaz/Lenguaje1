#include <iostream>
#include <math.h>
using namespace std;

int main()
{
//PROGRAMA QUE SIMULA UN CAJERO AUTOMATICO CON UN SALDO INICIAL DE 1000$
    int op,saldoInicial=1000;
    float saldo=0,extra=0,retiro=0;

    cout<<"()------Cajero Automatico-----()"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero en cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: "; cin>>op;

    switch (op)
    {
    case 1: 
            cout<<"Ingrese el monto a depositar: "; cin>>extra;
            saldo = saldoInicial + extra;
            cout<<"Saldo total: "<<saldo<<endl;
    break;
    case 2: 
            cout<<"Ingrese el monto a retirar: "; cin>>retiro;
            if (retiro>saldoInicial)
            {
                cout<<"No tiene esa cantidad de dinero"<<endl;
            }
            else   
            {
                saldo = saldoInicial - retiro;
                cout<<"Saldo total: "<<saldo<<endl;
            }
    case 3: break;
    default:break;
    }

/*HACER UN MENU CON LAS SIGUIENTES OPCIONES
    1.CUBO DE UN NUMERO
    2.NUMERO PAR O IMPAR
    3.SALIR*/
    int opcion,numero,numCubo;

    cout<<endl<<endl<<"()------Bienvenido-----()"<<endl;
    cout<<"1. Cubo de un numero"<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: "; cin>>opcion;

    switch (opcion)
    {
    case 1: 
            cout<<"Ingrese un numero: "; cin>>numero;
            numCubo = pow(numero,3);
            cout<<"Cubo de "<<numero<<" es: "<<numCubo<<endl;
    break;
    case 2: 
            cout<<"Ingrese un numero: "; cin>>numero;
            if (numero%2==0)
            {
                cout<<"El numero es par";
            } 
            else
            {
                cout<<"El numero es impar";
            }
    break;  
    case 3: break;
    default:break;
    }
    return 0;
}