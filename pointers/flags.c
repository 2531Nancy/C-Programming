#include <stdio.h>
#include <math.h>

void checkNumber(int num, int *Even, int *Prime, int *Divisible) {
    if (num % 2 == 0) {
        *Even = 1;
    } else {
        *Even = 0;
    }

    *Prime = 1;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            *Prime = 0; 
            break;
        }
    }
    if (num % 3 == 0 || num % 7 == 0) {
        *Divisible = 1;
    } else {
        *Divisible = 0;
    }
}

int main() {
    int n, Even = 0,Prime = 0, Divisible = 0;

    printf("Enter number: ");
    scanf("%d", &n);
    checkNumber(n, &Even, &Prime, &Divisible);

    printf("Number is %s\n", (Even ? "even" : "not even"));
    printf("Number is %s\n", (Prime ? "prime" : "not prime"));
    printf("Number is %s\n", (Divisible ? "divisible by 3 or 7" : "not divisible by 3 or 7"));
    return 0;
}
