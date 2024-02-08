#include <stdio.h>
#include <string.h>

struct Employee {
    char Name[50];
    char DOB[20];  
    char StartingDate[20];
    double Salary;
};
int main() {
    struct Employee employees[4];

    // Read user input to fill up the array of employees
    for (int i = 0; i < 4; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].Name);
        printf("Date of Birth (DOB): ");
        scanf("%s", employees[i].DOB);
        printf("Starting Date: ");
        scanf("%s", employees[i].StartingDate);
        printf("Salary: ");
        scanf("%lf", &employees[i].Salary);
    }

    // Find the employee with the highest salary
    int highestSalaryIndex = 0;
    for (int i = 1; i < 4; i++) {
        if (employees[i].Salary > employees[highestSalaryIndex].Salary) {
            highestSalaryIndex = i;
        }
    }

    // Display the information of the employee with the highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("Name: %s\n", employees[highestSalaryIndex].Name);
    printf("Date of Birth (DOB): %s\n", employees[highestSalaryIndex].DOB);
    printf("Starting Date: %s\n", employees[highestSalaryIndex].StartingDate);
    printf("Salary: %.2lf\n", employees[highestSalaryIndex].Salary);

    return 0;
}


