#include <stdio.h>

struct employee {
    char name[50];
    float salary;
    int age;
};

int main() {
    struct employee employees[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the name of employee %d: ", i+1);
        scanf("%s", employees[i].name);

        printf("Enter the salary of employee %d: ", i+1);
        scanf("%f", &employees[i].salary);

        printf("Enter the age of employee %d: ", i+1);
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Age: %d\n\n", employees[i].age);
    }

    return 0;
}
