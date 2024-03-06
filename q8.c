#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[20];
    float totalMarks;
};

void readStudentData(struct Student *student) {
    printf("Enter Student Name: ");
    scanf("%s", student->studentName);

    printf("Enter Roll Number: ");
    scanf("%s", student->rollNo);

    printf("Enter Total Marks: ");
    scanf("%f", &student->totalMarks);
}

void displayStudentData(const struct Student *student) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student->studentName);
    printf("Roll Number: %s\n", student->rollNo);
    printf("Total Marks: %.2f\n", student->totalMarks);
}

int main() {
    struct Student student;

    readStudentData(&student);

    displayStudentData(&student);

    return 0;
}
