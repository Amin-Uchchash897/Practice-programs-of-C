/*
    Write a C program to check the entered password by the user is valid or not based on
    his/her ID using nested switch case.
*/

#include<stdio.h>

int main()
{
    int userId;
    int pwd;

    printf("Please Enter a user id : \n");
    scanf("%d", &userId);

    switch(userId)
    {
    case 1234 :
    {
        printf("Please Enter your password : \n");
        scanf("%d", &pwd);

        switch(pwd)
        {
        case 0000 :
        {
            printf("You entered correct password.\n");
            break;
        }
        default :
            printf("Incorrect password!\n");
            break;
        }
    }
    break;
    default :
    {
        printf("Incorrect user id!\n");
        break;
    }
    }

    getch();
}
