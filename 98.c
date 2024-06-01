/*
    Write a C program to check the entered password by the user is valid or not
    based on his/her ID using if-else.
*/

// if(correctId > 0 && correctID != 0 && correctPass > 0 && correctPass != 0

#include <stdio.h>

int main()
{
    int userId;
    int pwd;
    int correctId;
    int correctPass;

    printf("Please Enter your user id : \n");
    scanf("%d", &userId);
    printf("Please enter the user id for filtering : \n");
    scanf("%d", &correctId);
    // printf("Please enter the password for filtering : \n");
    // scanf("%d", &correctPass);

    if (correctId > 0 && correctId != 0)
    {
        if (userId == correctId)
        {
            printf("Please Enter your password please : \n");
            scanf("%d", &pwd);
            printf("Please enter the password for filtering : \n");
            scanf("%d", &correctPass);

            if (correctPass > 0 && correctPass != 0)
            {
                if (pwd == correctPass)
                {
                    printf("Great! you entered correct password.\n");
                }
                else
                {
                    printf("Sorry! this password was incorrect.\n");
                }
            }
            else
            {
                printf("The password you have entered was incorrect.\n");
            }
        }
        else
        {
            printf("Invalid user id!\n");
        }
    }
    else
    {
        printf("The user id you have entered was incorrect.\n");
    }

    getch();
}
