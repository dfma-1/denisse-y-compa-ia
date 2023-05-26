//nombre:fernanda
#include<stdio.h>

int main() {
	int a[10] = {10, 2, 3, -100, 1000, -200, 7, 1, 0};
	int r = 0;

	for (int i = 0; i < 10; i++) {
		if (a[i] > a[r]) {
			r = i;
		}
	}

	printf("%d\n", a[r]);
	printf("%d\n", r);

	return 0;
}

