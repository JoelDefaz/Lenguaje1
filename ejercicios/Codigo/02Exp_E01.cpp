#include <iostream>
using namespace std;

int main()
{
//(A+(B/C))/(D+(E/F))
    float a=0,
        b=0,
        c=0,
        d=0,
        e=0,
        f=0,
        respuesta=0;
    
    cout<<"Ingrese el valor de a: "; cin>>a;
    cout<<"Ingrese el valor de b: "; cin>>b;
    cout<<"Ingrese el valor de c: "; cin>>c;
    cout<<"Ingrese el valor de d: "; cin>>d;
    cout<<"Ingrese el valor de e: "; cin>>e;
    cout<<"Ingrese el valor de f: "; cin>>f;

    respuesta = ((a+(b/c))/(d+(e/f)));

    cout.precision(3);
    cout<<"La respuesta es: "<<respuesta<<endl<<endl;

//A+(B/(C-D))

    float A=0,
        B=0,
        C=0,
        D=0,
        resultado=0;
    
    cout<<"Ingrese el valor de a: "; cin>>A;
    cout<<"Ingrese el valor de b: "; cin>>B;
    cout<<"Ingrese el valor de c: "; cin>>C;
    cout<<"Ingrese el valor de d: "; cin>>D;

    resultado = A+(B/(C-D));

    cout<<"La respuesta es: "<<resultado<<endl;
    return 0;
}