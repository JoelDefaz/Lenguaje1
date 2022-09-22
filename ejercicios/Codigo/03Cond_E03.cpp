#include <iostream>
using namespace std;

int main()
{
//Verificar si el caracter ingresado por el usuario es es una vocal minuscula o no
    char caracter;
    cout<<"Digite un caracter: "; cin>>caracter;

    switch (caracter)//Casos de caracteres con comillas simples
    {
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': cout<<"Es una vocal minuscula"; break;
    default : cout<<"NO es una vocal minuscula"; break;
    }

//Verificar si el caracter ingresado por el usuario es es una vocal minuscula, Mayuscula o no es vocal
    char letra;
    cout<<endl<<"Ingrese un caracter: "; cin>>letra;

    switch (letra)
    {
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': cout<<"Es una vocal Minuscula"; break;
    case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U': cout<<"Es una vocal Mayuscula"; break;
    default : cout<<"NO es una vocal"; break;
    }
return 0;
}