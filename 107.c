// Write a C program to print all natural numbers from 1 to n. – using while loop.

#include <stdio.h>

int main()
{
    int i = 1, number;

    printf("Enter the number : \n");
    scanf("%d", &number);

    while (i <= number)
    {
        printf("%d\n", i);
        i++;
    }

    getch();
}