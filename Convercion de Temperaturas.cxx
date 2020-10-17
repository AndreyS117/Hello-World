#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
int A, B, C, D, E, F, G, H, I, numero;
int main(int argc, char *argv[])
{cout<<"Indique el numero de la escala a ingresar 1-Celcius, 2-Kelvin, o 3-Farenheit) ";
	cin>>numero;
	switch(numero){
		case 1: cout<<"ingrese temperatura en °C ";
		cin>>A;
		B=(A*1.8)+32;
		C=(A+273.15);
		cout<< "Temperatura en Farenheit: "; cout<<B;		
		cout<<"    Temperatura en Kelvin: "; cout<<C;
		break;
		case 2: cout<<"ingrese temperatura en °F ";
		cin>>D;
		E=(D-32)/1.8;
		F=((D-32)/1.8)+273.15;
		cout<<"Temperatura en Celcius "; cout<< E;
		cout<<"    temperatura en Kelvin "; cout<<F;
		break;
		case 3: cout<<"Ingrese temperatura en Kelvin ";
		cin>> G;
		H=G-273.15;
		I=((G-273.15)*1.8)+32;
		cout<<"Temperatura en Celcius "; cout<<H;
		cout<<"    Temperatura en Farenheit ";
		cout<<I;
		break;
		}
		return 0;
}