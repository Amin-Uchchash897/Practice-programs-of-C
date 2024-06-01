// Write a program to print a factorial number.

#include<stdio.h>

int main()
{
    int number, i, fact = 1;

    printf("Enter a number : \n");
    scanf("%d", &number);

    for(i=1; i <= number; i = i+1)
    {
        fact = fact * i;
    }

    printf("The Factorial of %d is : %d\n", number, fact);

    getch();
}
