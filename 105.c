/*
    Program Name: To calculate the sum of numbers (10 numbers max).
    If the user enters a Negative number, the loop will be terminated.
*/

#include <stdio.h>

int main()
{
    int i;
    double number, sum = 0.0;

    // printf("Please enter a number : \n");
    // scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        printf("Enter number%d: ", i);
        scanf("%lf", &number);
        if (number < 0.0)
        {
            break;
        }
        sum += number;
    }
    printf("Sum = %lf\n", sum);

    getch();
}
