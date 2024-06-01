/*
    Write a C program to find maximum between three numbers using switch case.
*/

#include <stdio.h>

int main()

{
    int number1, number2, number3;

    printf("Enter three numbers : \n");
    scanf("%d%d%d", &number1, &number2, &number3);

    switch (number1 > number2)
    {
    case 1:
        switch (number1 > number3)
        {
        case 1:
            printf("%d is the maximum number.\n", number1);
            break;
        case 0:
            printf("%d is the maximum number.\n", number3);
            break;
        }
        break;

    case 0:
        switch (number2 > number3)
        {
        case 1:
            printf("%d is the maximum number.\n", number2);
            break;
        case 0:
            printf("%d is the maximum number.\n", number3);
            break;
        }
        break;
    }

    return 0;
}
