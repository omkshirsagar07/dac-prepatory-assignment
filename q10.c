#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];

    printf("Enter names of students (up to %d names, type 'end' to stop):\n", MAX_STUDENTS);

    int count = 0;
    while (count < MAX_STUDENTS) {
        printf("Enter name #%d: ", count + 1);
        scanf("%s", nameOfStudents[count]);

        if (strcmp(nameOfStudents[count], "end") == 0) {
            break;
        }

        count++;
    }

    qsort(nameOfStudents, count, MAX_NAME_LENGTH, compareNames);

    printf("\nSorted Names of Students:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
