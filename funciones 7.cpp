#include<iostream>
using namespace std;
int mcd(int a,int b);
int mcm(int a,int b);
int main (){
	int num1,num2;
	cout<<"ingrese el primer numero: ";
	cin>>num1;
	cout<<"ingrese el segundo numero: ";
	cin>>num2;
	cout<<"MCD: "<<mcd(num1,num2)<<endl;
	cout<<"MCM: "<<mcm(num1,num2)<<endl;
	return 0;
}
int mcd(int a,int b){
	int c;
	while (b!=0){
		c=b;
		b=b%a;
		a=c;
	}
	return a;
}
int mcm(int a,int b){
	return (a*b)/mcd(a,b);
}
