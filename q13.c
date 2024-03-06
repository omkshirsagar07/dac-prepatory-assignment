#include <stdio.h>
#include <string.h>

int main() {
    
    char *strings[] = {"apple", "orange", "banana", "apple", "grape", "banana", "kiwi", "orange"};

    int size = sizeof(strings) / sizeof(strings[0]);

    printf("Duplicated Strings:\n");

    
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);
                break; 
            }
        }
    }

    return 0;
}
