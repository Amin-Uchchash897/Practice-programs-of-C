// Write a C program to check whether a number is positive, negative or zero using switch case.

#include<stdio.h>

int main()
{
    int number;

    printf("Please Enter a number : \n");
    scanf("%d", &number);

    switch(number > 0)
    {
    case 1 :
        printf("%d is a positive number.\n", number);
        break;

    case 0 :
        switch(number < 0)
        {
        case 1 :
            printf("%d is a negative number.\n", number);
            break;
        case 0 :
            printf("%d is zero.\n", number);
            break;
        }
        break;

    }

    getch();
}
