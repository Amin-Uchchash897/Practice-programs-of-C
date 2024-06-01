// Write a program to print day of week using switch case.(One week = Friday, Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday)

#include<stdio.h>

int main()
{
    int week;

    printf("Please Enter week number between (1-7) : \n");
    scanf("%d", &week);

    switch(week)
    {
    case 1 :
    {
        printf("The day of %d = Monday.\n", week);
        break;
    }
    case 2 :
    {
        printf("The day of %d = Tuesday.\n", week);
        break;
    }
    case 3 :
    {
        printf("The day of %d = Wednesday.\n", week);
        break;
    }
    case 4 :
    {
        printf("The day of %d = Thursday.\n", week);
        break;
    }
    case 5 :
    {
        printf("The day of %d = Friday.\n", week);
        break;
    }
    case 6 :
    {
        printf("The day of %d = Saturday.\n", week);
        break;
    }
    case 7 :
    {
        printf("The day of %d = Sunday.\n", week);
        break;
    }
    default :
    {
        printf("Error! Not a valid day between a week.\n");
    }
    }

    getch();
}
