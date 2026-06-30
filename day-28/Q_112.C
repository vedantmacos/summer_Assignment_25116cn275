#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact contact[100];
    int n, i, choice, found;
    char searchName[50];

    printf("===== Contact Management System =====\n");

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Add Contacts
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Contact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", contact[i].name);

        printf("Phone Number: ");
        scanf("%s", contact[i].phone);
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display All Contacts\n");
        printf("2. Search Contact by Name\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nContact List\n");
                printf("-----------------------------\n");
                printf("Name\t\tPhone Number\n");
                printf("-----------------------------\n");

                for(i = 0; i < n; i++)
                {
                    printf("%s\t\t%s\n",
                           contact[i].name,
                           contact[i].phone);
                }
                break;

            case 2:
                found = 0;

                printf("Enter Name to Search: ");
                scanf("%s", searchName);

                for(i = 0; i < n; i++)
                {
                    if(strcmp(contact[i].name, searchName) == 0)
                    {
                        printf("\nContact Found!\n");
                        printf("Name : %s\n", contact[i].name);
                        printf("Phone: %s\n", contact[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Contact Not Found!\n");
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