// Write a program to find maximum between three numbers.

#include<stdio.h>

int main()
{
    int number1, number2, number3, max;

    printf("Enter Three Numbers : \n");
    scanf("%d%d%d", &number1, &number2, &number3);

    max = number1;

    if(number2 > max && number2 > number3)
    {
        printf("%d is the maximum number.\n", number2);
    }
    else if(number3 > max && number3 > number2)
    {
        printf("%d is the maximum number.\n", number3);
    }
    else
    {
        printf("%d is the maximum number.\n", number1);
    }

    getch();
}
