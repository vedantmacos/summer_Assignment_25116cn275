#include <stdio.h>

int main()
{
    int totalSeats = 10;
    int bookedSeats = 0;
    int choice, seats;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Seats = %d\n", totalSeats - bookedSeats);
                break;

            case 2:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if(seats <= 0)
                {
                    printf("Invalid number of seats!\n");
                }
                else if(bookedSeats + seats <= totalSeats)
                {
                    bookedSeats += seats;
                    printf("Booking Successful!\n");
                    printf("Booked Seats = %d\n", bookedSeats);
                    printf("Available Seats = %d\n", totalSeats - bookedSeats);
                }
                else
                {
                    printf("Not enough seats available!\n");
                }
                break;

            case 3:
                printf("Enter number of seats to cancel: ");
                scanf("%d", &seats);

                if(seats <= 0)
                {
                    printf("Invalid number of seats!\n");
                }
                else if(seats <= bookedSeats)
                {
                    bookedSeats -= seats;
                    printf("Cancellation Successful!\n");
                    printf("Booked Seats = %d\n", bookedSeats);
                    printf("Available Seats = %d\n", totalSeats - bookedSeats);
                }
                else
                {
                    printf("You cannot cancel more seats than booked!\n");
                }
                break;

            case 4:
                printf("Thank You for using the Ticket Booking System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}