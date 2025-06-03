#include<iostream>
using namespace std;
bool numeroperfecto(int n);
int main (){
	int numero;
	cout<<"ingrse un numero: ";
	cin>>numero;
	if (numeroperfecto(numero)){
		cout<<numero<<" si es un numeroperfecto "<<endl;
	}
	else {
		cout<<numero<<" no es un numero perfecto "<<endl;
	}
	return 0;
}
bool numeroperfecto(int n){
	int suma=0;
	for (int i=1; i<n; i++){
		if (n%i==0){
			suma=suma+i;	
			}
	}
	return suma==n;
}
