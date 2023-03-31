#include <stdio.h>

struct student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    struct student s1;

   
    printf("Enter the name of the student: ");
    scanf("%s", s1.name);
    printf("Enter the ID of the student: ");
    scanf("%d", &s1.id);
    printf("Enter the GPA of the student: ");
    scanf("%f", &s1.gpa);

    
    printf("Name: %s\n", s1.name);
    printf("ID: %d\n", s1.id);
    printf("GPA: %f\n", s1.gpa);

    return 0;
}
