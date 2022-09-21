#include <iostream>
using namespace std;

int main()
{
//If: Se pregunta si se cumple la condicion (...)
    int numero=0,dato=5;                        // =  Operador de asignacion de un valor

    cout<<"Ingrese un numero: "; cin>>numero;
    cout<<"Dato: 5"<<endl;

cout<<"()------IGUALDAD-----()";
    if (numero==dato)                           // == Operador de igualdad
    {
        //Si cumple la condicion se ejecuta esta parte del codigo
        cout<<endl<<"El numero es 5"<<endl;
    }
    else
    {
        //En caso de que no cumpla se ejecuta esta parte del codigo ignorando lo anterior
        cout<<endl<<"El numero es diferente de 5"<<endl;
    }

cout<<"()------DIFERENTE-----()";
    if (numero!=dato)                           // == Operador de diferencia
    {
        cout<<endl<<"El numero es diferente de 5"<<endl;
    }
    else
    {
        cout<<endl<<"El numero es 5"<<endl;
    }
    
cout<<"()------MAYOR-----()";
    if (numero>dato)                           // > Operador mayor que
    {
        cout<<endl<<"El numero es mayor que 5"<<endl;
    }
    else
    {
        cout<<endl<<"El numero es menor a 5"<<endl;
    }

cout<<"()------MENOR-----()";
    if (numero<dato)                           // < Operador menor que
    {
        cout<<endl<<"El numero es menor que 5"<<endl;
    }
    else
    {
        cout<<endl<<"El numero es mayor a 5"<<endl;
    }

cout<<"()------MAYOR O IGUAL-----()";
    if (numero>=dato)                           // >= Operador mayor o igual que
    {
        cout<<endl<<"El numero es mayor o igual que 5"<<endl;
    }
    else
    {
        cout<<endl<<"El numero es menor a 5"<<endl;
    }

cout<<"()------MENOR O IGUAL-----()";
    if (numero<=dato)                           // <= Operador menor o igual que
    {
        cout<<endl<<"El numero es menor o igual que 5"<<endl;
    }
    else
    {
        cout<<endl<<"El numero es mayor a 5"<<endl;
    }

/*SWICH: Toma en cuenta una expresion y si esta coincide con algun caso que se a 
determinadocon anterioridad se ejecutara las instrucciones de este caso, 
caso contrario se saltara todo el bloque de instrucciones*/
    int valor=0;
    cout<<endl<<"Ingrese un valor entre 1 y 5: "; cin>>valor; cout<<endl;

    switch (valor)
    {
        case 1:  cout<<"El valor es 1"<<endl;           break;  //break se salta los denas casos
        case 2:  cout<<"El valor es 2"<<endl;           break;
        case 3:  cout<<"El valor es 3"<<endl;           break;
        case 4:  cout<<"El valor es 4"<<endl;           break;
        case 5:  cout<<"El valor es 5"<<endl;           break;
        default: cout<<"El valor NO esta en el rango de 1 a 5";  break;
    }
    return 0;
}