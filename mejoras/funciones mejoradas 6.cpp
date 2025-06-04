#include<iostream>
#include<vector>
using namespace std;
bool esprimo(int n);
int contarprimosHasta(int limite);
void mostrarprimos(int limite, int total);
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
	int totalprimos=contarprimosHasta(num);
    mostrarprimos(num, totalprimos);
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
int contarprimosHasta(int num) {
    int contador = 0;
    for (int i = 2; i <= num; i++) {
        if (esprimo(i)) {
            contador++;
        }
    }
    return contador;
}
void mostrarprimos(int num, int total) {
    cout<<"\nNumeros primos hasta "<<num<<":\n";
    for (int i=2; i<=num; i++) {
        if (esprimo(i)) {
            cout<<i<< " ";
        }
    }
    cout << "\n\nTotal de numeros primos encontrados: "<<total<<endl;
}
