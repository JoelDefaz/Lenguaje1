#include <iostream>
using namespace std;

int main()
{
/*Pedir al usuario 2 numeros y presetar en pantalla su suma, 
resta, multiplicacion, division de los datos ingresados*/
    float A=0,B=0,suma=0,resta=0,multiplicacion=0,division=0;
    cout<<"Ingrese el valor de A: "; cin>>A;
    cout<<"Ingrese el valor de B: "; cin>>B;

    suma             = A+B;
    resta            = A-B;
    multiplicacion   = A*B;
    division         = A/B;

    cout<<endl<<"* Respuestas: "<<endl;
    cout<<"A: "<<A<<"\t"<<"B: "<<B<<endl;
    cout<<"A+B= "<<suma<<endl;
    cout<<"A-B= "<<resta<<endl;
    cout<<"AxB= "<<multiplicacion<<endl;
    cout<<"A/B= "<<division<<endl;

//Pedir al usuario el precio de un producto y mostrar en pantalla el precio sumado el IVA
    float precio=0,IVA=0,precioFinal=0;
    cout<<endl<<"Ingrese el valor del producto: "; cin>>precio;

    IVA         =precio*0.12;
    precioFinal =precio+IVA;

    cout<<endl<<"* Respuesta: "<<endl<<endl;
    cout<<"Precio ingresado: "<<precio<<endl;
    cout<<"IVA: "<<IVA<<endl;
    cout<<"Precio a pagar: "<<precioFinal<<endl;

    return 0;
}