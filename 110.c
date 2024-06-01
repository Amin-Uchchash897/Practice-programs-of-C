// Write a C program to print all even numbers between 1 to 100. – using while loop

#include <stdio.h>

int main()
{
    int i = 2;

    printf("The Even Numbers from (1-100) is : \n");
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    getch();
}