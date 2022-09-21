#include <iostream>
#include <math.h>
using namespace std;

int main()
{
//Expresion: raiz cuadradra de x sobre la resta entre y elevada al cuadradro y uno
    float x=0,y=0,rta=0;

    cout<<"Ingrese el valor de x: "; cin>>x;
    cout<<"Ingrese el valor de y: "; cin>>y;

    rta = (sqrt(x))/(pow(y,2)-1);

    cout.precision(4);
    cout<<"La respuesta es: "<<rta<<endl;

//Expresion: Ecuacion cuadratica por formula general
    float a=0,b=0,c=0,resultado1=0,resultado2=0;

    cout<<endl<<"----(0)Ecuacion general(0)----"<<endl<<endl;
    cout<<"Ingrese el valor de a: "; cin>>a;
    cout<<"Ingrese el valor de b: "; cin>>b;
    cout<<"Ingrese el valor de c: "; cin>>c;

    resultado1 = ((0-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    resultado2 = ((0-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);

    cout<<"Los resultados son: "<<endl;
    cout<<"X1: "<<resultado1<<"\t"<<"X2: "<<resultado2<<endl;
    
    return 0;
}