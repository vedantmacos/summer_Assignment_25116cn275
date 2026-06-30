#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, choice;

    printf("===== Student Record Management System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Add Student Records
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records:\n");
                printf("---------------------------------------------\n");
                printf("Roll No\tName\tMarks\n");
                printf("---------------------------------------------\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\n",
                           s[i].rollNo,
                           s[i].name,
                           s[i].marks);
                }
                break;

            case 2:
            {
                int roll, found = 0;

                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++)
                {
                    if(s[i].rollNo == roll)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll No : %d\n", s[i].rollNo);
                        printf("Name    : %s\n", s[i].name);
                        printf("Marks   : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student Record Not Found!\n");

                break;
            }

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}