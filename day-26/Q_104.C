#include <stdio.h>

int main()
{
    int choice, score = 0;

    printf("===== Quiz Application =====\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is New Delhi.\n\n");
    }

    // Question 2
    printf("Q2. Which language is mainly used for system programming?\n");
    printf("1. C\n");
    printf("2. HTML\n");
    printf("3. CSS\n");
    printf("4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C.\n\n");
    }

    // Question 3
    printf("Q3. How many days are there in a leap year?\n");
    printf("1. 365\n");
    printf("2. 364\n");
    printf("3. 366\n");
    printf("4. 360\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 366.\n\n");
    }

    // Question 4
    printf("Q4. Which symbol is used for comments in C (single line)?\n");
    printf("1. <!-- -->\n");
    printf("2. //\n");
    printf("3. ##\n");
    printf("4. **\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is //.\n\n");
    }

    // Question 5
    printf("Q5. Which function is used to print output in C?\n");
    printf("1. scanf()\n");
    printf("2. print()\n");
    printf("3. printf()\n");
    printf("4. input()\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is printf().\n\n");
    }

    printf("===== Quiz Finished =====\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}