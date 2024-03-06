#include <stdio.h>

struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct Employee *e, const char *firstName, const char *lastName, double monthlySalary) {
    strcpy(e->firstName, firstName);
    strcpy(e->lastName, lastName);
    e->monthlySalary = monthlySalary;
}

void set_salary(struct Employee *e, double newSalary) {
    e->monthlySalary = newSalary;
}

void emp_display(const struct Employee *e) {
    printf("Employee: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: $%.2f\n", e->monthlySalary);
    printf("Yearly Salary: $%.2f\n", e->monthlySalary * 12);
}

void give_raise(struct Employee *e, double percentage) {
    e->monthlySalary *= (1 + percentage / 100);
}

int main() {
    struct Employee emp1, emp2;

    emp_init(&emp1, "John", "Doe", 5000.0);
    emp_init(&emp2, "Jane", "Smith", 6000.0);

    printf("Before Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    give_raise(&emp1, 10.0);
    give_raise(&emp2, 10.0);

    printf("\nAfter 10%% Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
