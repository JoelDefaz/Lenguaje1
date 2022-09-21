#include <iostream>
using namespace std;

int main()
{
//  EXPRESION: (A/B) + 1
    float a=0,b=0,rtp=0;
    cout<<"Ingrese el valor de a: "; cin>>a;
    cout<<"Ingrese el valor de b: "; cin>>b;

    rtp = (a/b)+1;

    cout<<endl<<"a: "<<a<<"\t"<<"b: "<<b<<endl;
    cout<<endl<<"(a/b)+1  :  "<<rtp;
    cout.precision(3);                      //Redondea a 3 numeros entre enteros y decimales
    cout<<endl<<"(a/b)+1  :  "<<rtp;

//  EXPRESION: (A+B)/(C+D)
    float A=0,B=0,C=0,D=0,rtdo=0;
    cout<<endl<<endl<<"-----------------------------"<<endl<<endl;
    cout<<"Ingrese el valor de A: "; cin>>A;
    cout<<"Ingrese el valor de B: "; cin>>B;
    cout<<"Ingrese el valor de C: "; cin>>C;
    cout<<"Ingrese el valor de D: "; cin>>D;

    rtdo = (A+B)/(C+D);

    cout<<endl<<"A: "<<A<<"\t"<<"B: "<<B<<"\t"<<"C: "<<C<<"\t"<<"D: "<<D<<endl;
    cout<<endl<<"(A+B)/(C+D)  :  "<<rtp;
}