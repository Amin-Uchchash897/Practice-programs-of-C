// Write a C program to find maximum between three numbers using switch case.

#include<stdio.h>

int main()
{
    double number1, number2, number3;

    printf("Please Enter Three Numbers : \n");
    scanf("%lf%lf%lf", &number1, &number2, &number3);

    switch(number1 > number2 && number1 > number3)
    {
    case 0 :
    {
        printf("%.2lf is the largest number. \n", number3);
        break;
    }
    case 1 :
    {
        printf("%.2lf is the largest number. \n", number2);
        break;
    }
    case 2 :
    {
        printf("%.2lf is the largest number. \n", number1);
        break;
    }
    }

    getch();
}
