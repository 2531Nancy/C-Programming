#include <stdio.h>
#include <ctype.h>

int Alphabet(char ch) {
    return isalpha(ch);
}

int Digit(char ch) {
    return isdigit(ch);
}

int Lowercase(char ch) {
    return islower(ch);
}

int Uppercase(char ch) {
    return isupper(ch);
}

char toUppercase(char ch) {
    return toupper(ch);
}

char toLowercase(char ch) {
    return tolower(ch);
}

int main() {
    char n;
    int choice;

   
    printf("Enter a character: ");
    scanf(" %c", &n);

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Check if it is an alphabet\n");
        printf("2. Check if it is a digit\n");
        printf("3. Check if it is lowercase\n");
        printf("4. Check if it is uppercase\n");
        printf("5. Convert it to uppercase\n");
        printf("6. Convert it to lowercase\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (Alphabet(n)) {
                    printf("%c is an alphabet.\n", n);
                } else {
                    printf("%c is not an alphabet.\n", n);
                }
                break;

            case 2:
                if (Digit(n)) {
                    printf("%c is a digit.\n", n);
                } else {
                    printf("%c is not a digit.\n", n);
                }
                break;

            case 3:
                if (Lowercase(n)) {
                    printf("%c is a lowercase alphabet.\n", n);
                } else {
                    printf("%c is not a lowercase alphabet.\n", n);
                }
                break;

            case 4:
                if (Uppercase(n)) {
                    printf("%c is an uppercase alphabet.\n", n);
                } else {
                    printf("%c is not an uppercase alphabet.\n", n);
                }
                break;

            case 5:
                printf("Uppercase of %c is %c.\n", n, toUppercase(n));
                break;

            case 6:
                printf("Lowercase of %c is %c.\n", n, toLowercase(n));
                break;

            case 7:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 7);
    return 0;
}
