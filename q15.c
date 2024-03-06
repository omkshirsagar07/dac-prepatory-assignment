#include <stdio.h>
#include <ctype.h>

#define ALPHA_SIZE 26

void countAlpha(const char *s, int *o) {
    while (*s) {
        if (isalpha(*s)) {
            o[tolower(*s) - 'a']++;
        }
        s++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int occ[ALPHA_SIZE] = {0};

    countAlpha(str, occ);

    printf("\nOutput:\n");
    for (int i = 0; i < ALPHA_SIZE; ++i) {
        if (occ[i] > 0) {
            printf("%c : %d\n", 'A' + i, occ[i]);
        }
    }

    return 0;
}
