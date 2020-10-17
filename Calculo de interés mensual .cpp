#include <iostream>
long a, b, c, numero, prestamo, pago, I1, I2, I3;
using namespace std;
int main(int argc, char *argv[])

{cout<<"Ingrese el valor del monto del prestamo";cout<<endl; 
cin>>prestamo;

cout<<"Elija el plazo a pagar "; cout<<endl;

cout<<"1) 6 meses"; cout<<endl;

cout<<"2) 12 meses"; cout<<endl;

cout<<"3) 24 meses"; cout<<endl;
cin>>numero;


if(numero==1){
I1=(prestamo*0.10);
pago=(prestamo/6) +I1;
cout<< "Su pago mensual es de: $"; cout<<pago; cout<<endl;
cout<<"Monto de interes: $"; cout<<I1;
}

if(numero==2){
I2=(prestamo*0.20);
pago=(prestamo/12)+I2;
cout<<"Su pago mensual es de: $"; cout<< pago; cout<<endl;
cout<<"Monto de interes: $"; cout<<I2;
}

if(numero==3){
I3=(prestamo*0.40);
pago= (prestamo/24)+I3;
cout<<"Su pago mensual es de: $";cout<<pago; cout<<endl;
cout<<"Monto de interes: $"; cout<<I3; 
}

if(numero>=4){
cout<<"Opcion no valida, elija una opcion del 1 al 3";
}

return 0;
}
	

