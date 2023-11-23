//write a program in C, write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, and O otherwise. Use this function in main to accept n numbers and check if they are even or odd.

#include <stdio.h>

int Even(int number) {
    
    if (number % 2 == 0) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        int num;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (Even(num)) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    }

    return 0;
}
