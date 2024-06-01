// Write a C program to find maximum between Two numbers using switch case.

#include<stdio.h>

int main()
{
    int number1, number2; // number1 = 3, number2 = 2;

    printf("Please Enter Two Numbers : \n");
    scanf("%d%d", &number1, &number2);

    switch(number1 > number2)
    {
    case 0 :
    {
        printf("%d is maximum number.\n", number2);
        break;
    }
    case 1 :
    {
        printf("%d is maximum number.\n", number1);
        break;
    }
    }

    getch();
}
