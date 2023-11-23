#include <stdio.h>
#include <ctype.h>

int Character(char ch) {
    if (isalpha(ch)) {
        return 1; 
    } else if (isdigit(ch)) {
        return 2;
    } else {
        return 3;
    }
}
int main() {
    char ch;
    int alphabet = 0, digitCount = 0, specialSym = 0;

    printf("Enter characters (Ctrl+D to end input):\n");

    while ((ch = getchar()) != EOF) {
        int classification = Character(ch);

        switch (classification) {
            case 1:
                alphabet++;
                break;
            case 2:
                digitCount++;
                break;
            case 3:
                specialSym++;
                break;
        }
    }
    printf("\nResults:\n");
    printf("Alphabets: %d\n", alphabet);
    printf("Digits: %d\n", digitCount);
    printf("Special Symbols: %d\n", specialSym);

    return 0;
}
