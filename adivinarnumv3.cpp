#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int a;
	int n;
	int num1;
	num1 = (rand()%9)+1;
	a = 1000000;
	while (a>0) {
		cout << "ingresa un numero: " << endl;
		cin >> n;
		if (num1==n) {
			cout << "Felicidades haz adivinado" << endl;
			a = 0;
		} else {
			a = a-1;
			if (a==0) {
				cout << "El numero oculto es: " << num1 << endl;
			} else {
				cout << "Fallaste te quedan" << a << "Intentos" << endl;
			}
		}
	}
	return 0;
}

