// Multiplication Table.

#include<stdio.h>

int main()
{
    while(1)
    {
        int number, i;

        printf("Enter any number : \n");
        scanf("%d", &number);

        printf("The Multiplication Table of %d is : \n\n", number);

        for(i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", number, i, number*i);
        }

        getch();
    }
}
