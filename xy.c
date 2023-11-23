//calculate x^y
#include <stdio.h>
long long power(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * power(x, y - 1);
    }
}

int main() {
    int base, exp;

    printf("Base: ");
    scanf("%d", &base);

    printf("Exponent: ");
    scanf("%d", &exp);
    printf("%d^%d = %lld\n", base, exp, power(base, exp));
    return 0;
}
