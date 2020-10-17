#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
int A, r, P, numero;
int main(int argc, char *argv[])
{cout<<"Ingrese el valor del radio ";
cin>> r;
A=(3.1416*(r*r));
P=(3.1416*(r*2));
cout<<"Ingrese el NUMERO de la operacion a calcular: 1-Area, 2-Perimetro ";
cin>> numero;


switch(numero){
	case 1: cout<<"El area es: ";
	cout<<A;
	break;
	case 2: cout<<"El valor del perimetro es: " ;cout<<P;
break;
}
	
	return 0;
}