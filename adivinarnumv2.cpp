
#include<iostream>
using namespace std;

int main() {
	int g;
	int num1;
	num1 = 2;
	cout << "Ingresa un numero: " << endl;
	cin >> g;
	if (g<num1) {
		cout << "El numero que ingresaste es menor al numero oculto" << endl;
	} else {
		if (g>num1) {
			cout << "El numero ingresado es mayor al numero oculto" << endl;
		}
	}
	return 0;
}

