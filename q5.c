#include <stdio.h>

int main() {
    char ch;
    int uppercaseCount = 0, lowercaseCount = 0, digitCount = 0, otherCount = 0;

    printf("Enter a string of characters: ");

    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            uppercaseCount++;
        } else if (ch >= 'a' && ch <= 'z') {
            lowercaseCount++;
        } else if (ch >= '0' && ch <= '9') {
            digitCount++;
        } else {
            otherCount++;
        }
    }

    printf("\nCharacter Statistics:\n");
    printf("Uppercase: %d\n", uppercaseCount);
    printf("Lowercase: %d\n", lowercaseCount);
    printf("Digits: %d\n", digitCount);
    printf("Other Characters: %d\n", otherCount);

    return 0;
}
