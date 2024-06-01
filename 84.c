// Write a C program print total number of days in a month using switch case.

#include<stdio.h>

int main()
{
    int month;

    printf("Please Enter a Month from (1-12) : \n");
    scanf("%d", &month);

    switch(month)
    {
    case 1 :
    {
        printf("The total days of month %d = 31\n", month); //January
        break;
    }
    case 2 :
    {
        printf("The total days of month %d = 28/29\n", month); //February
        break;
    }
    case 3 :
    {
        printf("The total days of month %d = 31\n", month); //March
        break;
    }
    case 4 :
    {
        printf("The total days of month %d = 30\n", month); //April
        break;
    }
    case 5 :
    {
        printf("The total days of month %d = 31\n", month); //May
        break;
    }
    case 6 :
    {
        printf("The total days of month %d = 30\n", month); //June
        break;
    }
    case 7 :
    {
        printf("The total days of month %d = 31\n", month); //July
        break;
    }
    case 8 :
    {
        printf("The total days of month %d = 31\n", month); //August
        break;
    }
    case 9 :
    {
        printf("The total days of month %d = 30\n", month); //September
        break;
    }
    case 10 :
    {
        printf("The total days of month %d = 31\n", month); //October
        break;
    }
    case 11 :
    {
        printf("The total days of month %d = 30\n", month); //November
        break;
    }
    case 12 :
    {
        printf("The total days of month %d = 31\n", month); //December
        break;
    }
    default:
        printf("Error! The total days limit between (1-12)\n");
    }

    getch();
}
