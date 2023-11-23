//calclate factorial using recurssion 

#include <stdio.h>

unsigned long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
int main() {
    int num;

    printf("Enter num: ");
    scanf("%d", &num);
    printf("Factorial of %d is %llu\n", num, fact(num));
    return 0;
}
