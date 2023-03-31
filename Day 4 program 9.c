#include <stdio.h>

struct student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    struct student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the ID of student %d: ", i+1);
        scanf("%d", &students[i].id);
        printf("Enter the GPA of student %d: ", i+1);
        scanf("%f", &students[i].gpa);
    }

  
    printf("\nInformation for all three students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("GPA: %.2f\n", students[i].gpa);
        printf("\n");
    }

    return 0;
}
