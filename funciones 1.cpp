#include<iostream>
using namespace std;
int resta(int val1, int val2);
int suma(int val1, int val2);
int producto(int val1, int val2);
int division(int val1, int val2);
int main(){
	int num1,num2,resultado,resultado2;
	cout<<"ingrese el primer numero: ";
	cin>>num1;
	cout<<"ingrese el segundo numero: ";
	cin>>num2;
	resta(num1,num2);
	resta(num2,num1);
	division(num1,num2);
	division(num2,num1);
	resultado=producto(num1,num2);
	resultado2=suma(num1,num2);
	cout<<"\nla multiplicacion de "<<num1<<" x "<<num2<<" es: "<<resultado;
	cout<<"\nla suma de "<<num1<<"+"<<num2<<" es: "<<resultado2;
	return 0;
}
int resta(int val1, int val2){
	int sustrac;
	sustrac=val1-val2;
	cout<<"\nla resta de "<<val1<<" - "<<val2<<" es: "<<sustrac;
	return 0;
}
int suma(int val1, int val2){
	int adicion;
	adicion=val1+val2;
	return(adicion);
}
int producto(int val1, int val2){
	int prod;
	prod=val1*val2;
	return(prod);
} 
int division(int val1, int val2){
	int cocie;
	cocie=val1/val2;
	cout<<"\nla division de "<<val1<<" / "<<val2<<" es: "<<cocie;
	return 0;
}
