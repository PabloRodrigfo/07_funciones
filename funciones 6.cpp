#include<iostream>
using namespace std;
bool esprimo(int n);
int main (){
	int num;
	cout<<"ingrese un numero: ";
	cin>>num;
	if (esprimo(num)){
		cout<<"el "<<num<<" es primo";
	}
	else {
		cout<<"el "<<num<<" no es primo";
	}
	return 0;
}
bool esprimo(int n) {
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for (int i=3; i*i<=n; i=i+2) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

