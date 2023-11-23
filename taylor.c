#include <stdio.h>


double power(double x, int y) {
    if (y == 0) {
        return 1.0;
    }

    double result = 1.0;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    int result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

double calculateSinTaylorSeries(int n, double x) {
    double result = 0.0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result += power(x, 2 * i + 1) / factorial(2 * i + 1);
        } else {
            result -= power(x, 2 * i + 1) / factorial(2 * i + 1);
        }
    }

    return result;
}

int main() {
    int n;
    double x;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double seriesResult = calculateSinTaylorSeries(n, x);
    printf("Taylor series result for sin(%.2lf) with %d terms: %.6lf\n", x, n, seriesResult);

    return 0;
}
