#include <iostream>
#include <math.h>           //Libreria Matematica y Trigonometrica de C++
using namespace std;

int main()
{
/*Programa que lee las notas de un estudiante y 
calcula su nota final con los siguietnes parametros:
        Nota Practicas      -->     30%
        Nota Teorica        -->     60%
        Nota Participacion  -->     10%             */

    float practicas=0,teorica=0,participacion=0,notaFinal=0;

    cout<<"Ingrese su nota de Practicas: ";       cin>>practicas;
    cout<<"Ingrese su nota en Teoria: ";          cin>>teorica;
    cout<<"Ingrese su nota de Participaciones: "; cin>>participacion;

    practicas *= 0.3;           //Es lo mismo que poner: practicas = practicas*0.3
    teorica  *= 0.6;
    participacion *= 0.1;
    notaFinal = practicas+teorica+participacion;
    
    cout.precision(3);
    cout<<"Su nota final es de: "<<notaFinal<<endl<<endl;

/*Programa que pida el valor de 2 catetos de un triangulo
rectangulo y devuelva el valor de la hipotenusa*/

    float cat1=0,cat2=0,hip=0;

    cout<<"Ingrese el valor del Cateto 1: "; cin>>cat1;
    cout<<"Ingrese el valor del Cateto 2: "; cin>>cat2;

    /*  
    sqrt(x)  = raiz cuadradra de x
    pow(x,y) = x elevado a la y
    */
    hip = sqrt((pow(cat1,2)+pow(cat2,2)));

    cout<<"El valor de la Hipotenusa es: "<<hip;
    return 0;
}