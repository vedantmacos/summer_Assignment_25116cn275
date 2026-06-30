#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("===== Salary Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        // Calculate HRA and DA
        emp[i].hra = emp[i].basicSalary * 0.20;
        emp[i].da = emp[i].basicSalary * 0.10;

        // Calculate Gross Salary
        emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    printf("\n========== Salary Report ==========\n");
    printf("---------------------------------------------------------------\n");
    printf("ID\tName\tBasic\tHRA\tDA\tGross\n");
    printf("---------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].grossSalary);
    }

    return 0;
}