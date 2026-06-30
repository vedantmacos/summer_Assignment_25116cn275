#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int available;
};

int main()
{
    struct Book book[100];
    int n, i, choice, id, found;

    printf("===== Library Management System =====\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Book Title: ");
        scanf("%s", book[i].title);

        printf("Author Name: ");
        scanf("%s", book[i].author);

        book[i].available = 1;
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display Books\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nBook List\n");
                printf("-----------------------------------------------\n");
                printf("ID\tTitle\tAuthor\tStatus\n");
                printf("-----------------------------------------------\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%s\t%s\n",
                           book[i].bookId,
                           book[i].title,
                           book[i].author,
                           book[i].available ? "Available" : "Issued");
                }
                break;

            case 2:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(book[i].bookId == id)
                    {
                        found = 1;

                        if(book[i].available)
                        {
                            book[i].available = 0;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book is Already Issued!\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 3:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(book[i].bookId == id)
                    {
                        found = 1;

                        if(book[i].available)
                        {
                            printf("Book is Already Available!\n");
                        }
                        else
                        {
                            book[i].available = 1;
                            printf("Book Returned Successfully!\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}