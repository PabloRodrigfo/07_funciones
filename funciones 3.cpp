#include<iostream>
using namespace std;
void fibonacci(int n,int &suma);
int main (){
	int n,suma;
	cout<<"ingrese la cantidad de terminos de la serie: ";
	cin>>n;
	suma=0;
	cout<<"la serie de fibonacci es: ";
	fibonacci(n,suma);
	cout<<"\nla suma de los terminos es: "<<suma<<endl;
	return 0;
}
void fibonacci(int n,int &suma){
	int a, b, c; 
	a=0;
	b=1;
	for (int i=0; i<n; i++){
		if (i<=1){
			c=i;
		}
		else {
			c=a+b;
			a=b;
			b=c;	
		}
		cout<<c<<" ";
		suma=suma+c;
	}
}
