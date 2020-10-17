#include <iostream>
using namespace std;
int numero=0,Limite_inferior=100,Limite_superior=200;

int main(int argc, char *argv[])
{ cout<<"Ingrese un numero del 100 al 200 ";
cin>> numero;

if(numero<Limite_inferior){
cout<<"Numero fuera de rango inferior";}

if(numero>Limite_superior){
cout<<"Numero fuera de rango superior";}

if(numero>=Limite_inferior && numero<=Limite_superior){
cout<<"Numero dentro del rango de valores";}

else{}	

return 0;}