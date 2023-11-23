#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 9; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 9; 
        }
    }
    return 1;
}
int main() {
    int count = 0;
    int num = 2; 
    printf("First 10 prime numbers:\n");

    while (count < 10) {
        if (isPrime(num) == 1) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}
