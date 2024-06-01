/*
    Write a C program to check whether a number is even or odd using switch case.
*/

#include<stdio.h>

int main()
{
    int number;

    printf("Enter a number : \n");
    scanf("%d", &number);

    switch(number != 0 || number > 0 || number < 0)
    {
    case 1 :
        switch(number % 2)
        {
        case 0 :
            printf("%d is the Even number.\n", number);
            break;
        case 1 :
            printf("%d is the Odd number.\n", number);
            break;
        }
        break;
    case 0 :
        printf("%d is not a number.\n", number);
        break;
    }

    getch();
}
