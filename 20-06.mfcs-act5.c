#include <stdio.h>

double suma(const double a[], const int n);

int main() {
    int i;
    const int n = 5;  // Example size of the array
    double a[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double s = suma(a, n);

    printf("Sum: %lf\n", s);

    return 0;
}

double suma(const double a[], const int n) {
    int i;
    double s = 0.0;

    for (i = 0; i < n; i++) {
        s += a[i];
    }

    return s;
}
