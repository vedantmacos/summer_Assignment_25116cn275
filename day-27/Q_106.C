#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i, choice, searchId, found;

    printf("===== Employee Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input Employee Details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEmployee Details:\n");
                printf("--------------------------------------\n");
                printf("ID\tName\tSalary\n");
                printf("--------------------------------------\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].salary);
                }
                break;

            case 2:
                found = 0;

                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID     : %d\n", emp[i].id);
                        printf("Name   : %s\n", emp[i].name);
                        printf("Salary : %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee Not Found!\n");
                }
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}