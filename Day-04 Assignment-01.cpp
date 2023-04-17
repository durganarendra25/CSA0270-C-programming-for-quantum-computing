#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    double salary;
};

int main() {
    struct Employee emp;

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee designation: ");
    scanf("%s", emp.designation);

    printf("Enter employee department: ");
    scanf("%s", emp.department);

    printf("Enter employee salary: ");
    scanf("%lf", &emp.salary);

    printf("\nEmployee details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2lf\n", emp.salary);

    return 0;
}
