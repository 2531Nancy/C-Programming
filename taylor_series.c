#include <stdio.h>

double power(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}
int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double Taylor(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += power(x, i) / fact(i);
    }
    return sum;
}

int main() {
    double x;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n) in the Taylor series: ");
    scanf("%d", &n);

    double result = Taylor(x, n);
    printf("The sum of the first %d terms of the Taylor series is: %.4f\n", n, result);

    return 0;
}
