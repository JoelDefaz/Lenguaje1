#include <iostream>
using namespace std;

int main()
{
/*CAMBIAR LOS NUMEROS DE ENTEROS A ROMANOS
    I = 1
    V = 5
    X = 10
    L = 50
    C = 100
    D = 500
    M = 1000*/
    int numero,unidades,decenas,centenas,miles;
    cout<<"Digite un numero: "; cin>>numero;
    //Descomponer el numero 2563 --> 2000+500+60+3

    //(%10 -> devuelve el residuo de la division para 10)
    unidades = numero%10;   // unidad = 2563/10 (donde su residuo es 3)    
    numero /= 10;           /* Es lo mismo que numero = numero/10 
    2563/10 = 256 porque la variable es de tipo entero, no toma decimales*/
    
    decenas = numero%10;    // decenas = 256/10 (residuo = 6)
    numero /= 10;           // 256/10 = 25

    centenas = numero%10;    // centenas = 25/10 (residuo = 5)
    numero /= 10;           // 25/10 = 2

    miles = numero%10;    // miles = 2/10 (residuo = 2)
    numero /= 10;           // 2/10 = 0

switch (miles)
    {
    case 1: cout<<"M"; break;
    case 2: cout<<"MM"; break;
    case 3: cout<<"MMM"; break;
    default:break;
    }

switch (centenas)
    {
    case 1: cout<<"C"; break;
    case 2: cout<<"CC"; break;
    case 3: cout<<"CCC"; break;
    case 4: cout<<"CD"; break;
    case 5: cout<<"D"; break;
    case 6: cout<<"DC"; break;
    case 7: cout<<"DCC"; break;
    case 8: cout<<"DCCC"; break;
    case 9: cout<<"CM"; break;
    default:break;
    }

switch (decenas)
    {
    case 1: cout<<"X"; break;
    case 2: cout<<"XX"; break;
    case 3: cout<<"XXX"; break;
    case 4: cout<<"XL"; break;
    case 5: cout<<"L"; break;
    case 6: cout<<"LX"; break;
    case 7: cout<<"LXX"; break;
    case 8: cout<<"LXXX"; break;
    case 9: cout<<"XC"; break;
    default:break;
    }

switch (unidades)
    {
    case 1: cout<<"I"; break;
    case 2: cout<<"II"; break;
    case 3: cout<<"III"; break;
    case 4: cout<<"IV"; break;
    case 5: cout<<"V"; break;
    case 6: cout<<"VI"; break;
    case 7: cout<<"VII"; break;
    case 8: cout<<"VIII"; break;
    case 9: cout<<"IX"; break;
    default:break;
    }

/*MOSTRAR LOS MESES DEL AÑO PIDIENDOLE AL USUARIO UN 
NUMERO ENTRE 1 - 12 Y MOSTRARLE EL MES CORRESPONDIENTE*/
    int mes;
    cout<<endl<<"Ingrese un numero entre 1 y 12 para seleccionar el mes: "; cin>>mes;

    switch (mes)
    {
    case 1: cout<<"Enero"; break;
    case 2: cout<<"Febrero"; break;
    case 3: cout<<"Marzo"; break;
    case 4: cout<<"Abril"; break;
    case 5: cout<<"Mayo"; break;
    case 6: cout<<"Junio"; break;
    case 7: cout<<"Julio"; break;
    case 8: cout<<"Agosto"; break;
    case 9: cout<<"Septiembre"; break;
    case 10: cout<<"Octubre"; break;
    case 11: cout<<"Noviembre"; break;
    case 12: cout<<"Diciembre"; break;
    default: cout<<"No valido"; break;
    }
return 0;
}