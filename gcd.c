//calculate GCD of 2 numbers
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("GCD of %d and %d is %d\n", n1, n2, gcd(n1, n2));

    return 0;
}
