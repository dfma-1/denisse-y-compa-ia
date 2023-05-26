//nombre:fernanda
#include <stdio.h>

int main() {
	float c[5];
	float r = 0;

	printf("DEPURAR EL SIGUIENTE PROGRAMA\n");

	for (int i = 0; i < 5; i++) {
		printf("numero %d: ", i + 1);
		scanf("%f", &c[i]);
		r += c[i];
	}

	printf("%.2f\n", r / 5);
	return 0;
}
