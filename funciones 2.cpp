#include <iostream>
using namespace std;
void divisionporRestas(int num1, int num2, int &cociente, int &resto) {
	int mayor = (num1 > num2) ? num1 : num2;
	int menor = (num1 > num2) ? num2 : num1;
	cociente = 0;
	while (mayor >= menor) {
		mayor=mayor-menor;	
		cociente++;
	}
	resto = mayor;
}
int main() {
    int num1, num2, cociente, resto;
    cout << "Ingrese el primer numero: ";
    cin >>num1;
    cout << "Ingrese el segundo numero: ";
	cin>>num2;
    divisionporRestas(num1, num2, cociente, resto);
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;
    return 0;
}
