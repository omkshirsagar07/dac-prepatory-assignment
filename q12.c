#include <stdio.h>
#include <ctype.h>
#include <string.h>


void reverseLetters(char *str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        
        if (isalpha(str[start]) && isalpha(str[end])) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
        }

        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    
    reverseLetters(inputString);

    
    printf("Reversed String: %s\n", inputString);

    return 0;
}
