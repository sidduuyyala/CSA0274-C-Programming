#include <stdio.h>
#include <string.h>

struct employee {
  char name[50];
  int age;
  float salary;
  char department[50];
};

void displaySalesEmployees(struct employee emp[], int size) {
  for (int i = 0; i < size; i++) {
    if (strcmp(emp[i].department, "Sales") == 0 && emp[i].salary > 50000.0) {
      printf("Name: %s\nAge: %d\nSalary: $%.2f\nDepartment: %s\n", emp[i].name, emp[i].age, emp[i].salary, emp[i].department);
    }
  }
}

int main() {
  struct employee emp[] = {
    {"John Smith", 35, 75000.0, "Sales"},
    {"Mary Johnson", 42, 60000.0, "Marketing"},
    {"David Lee", 28, 45000.0, "Sales"}
  };

  int size = sizeof(emp) / sizeof(emp[0]);
  displaySalesEmployees(emp, size);
  
  return 0;
}
