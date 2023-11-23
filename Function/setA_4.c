#include <stdio.h>

void nextChar(char input, int n) {
   
    if (input < 32 || input > 126) {
        printf("Invalid input character. Please enter a printable ASCII character.\n");
        return;
    }
    printf("Input character: %c\n", input);
    printf("Next %d characters: ", n);

    for (int i = 0; i < n; ++i) {

        printf("%c ", input + i + 1);
    }
    printf("\n");
}

int main() {
    char input;
    int n;
    printf("Enter character: ");
    scanf(" %c", &input);
    printf("Enter the number of characters to display: ");
    scanf("%d", &n);

    nextChar(input, n);
    return 0;
}
