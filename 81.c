// Write program to print factorial number.

#include<stdio.h>

int main()
{
    int number, fact = 1, i;

    printf("Enter a Number : \n");
    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    printf("The factorial of %d is : %d\n", number, fact);

    getch();
}
