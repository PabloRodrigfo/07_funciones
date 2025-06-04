#include<iostream>
using namespace std;
int sumaDivisores(int n);
bool amigos(int a,int b);
int main (){
	int num1,num2;
	cout<<"ingrese el primer numero: ";
	cin>>num1;
	cout<<"ingrese el segundo numero: ";
	cin>>num2;
	if(num1<=0 || num2<=0){
		cout<<"ingrese un numero diferente de cero"<<endl;
		return 0;
	}
	if (amigos(num1,num2)){
		cout<<"los numeros "<<num1<<" y "<<num2<<" son amigos "<<endl;
	}
	else {
		cout<<"los numeros "<<num1<<" y "<<num2<<" no son amigos "<<endl;
	}
	return 0;
}
int sumaDivisores(int n){
	int suma=1;
	for (int i=2; i*i<=n; i++){
		if (n%i==0){
			if (i*i==n){
				suma=suma+i;
			}
			else {
				suma=suma+i+n/i;
			}
			
		}
	}
	return suma;
}
bool amigos(int a,int b){
	return (sumaDivisores(a)==b) && 
	(sumaDivisores(a)==b);
}
