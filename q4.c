#include <stdio.h>

int main() {
    int marks[5];
    int totalMarks = 0;
    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        totalMarks += marks[i];
    }
    float average = (float)totalMarks / 5;
    char grade;
    if (average >= 90) {
        grade = 'Ex';
    } else if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    printf("\nTotal Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
