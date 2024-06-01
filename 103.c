/*
    Program name: Write a C program to check entered password of user is valid or not based
    on his\her user id.
*/

#include <stdio.h>

int main()
{
    int userId;
    int pwd;
    int validUserId;
    int validPassword;
    printf("ENTER A USER ID : \n");
    scanf("%d", &userId);
    printf("ENTER THE USER ID FOR VALIDATION : \n");
    scanf("%d", &validUserId);

    if (validUserId > 0 && validUserId != 0)
    {
        if (validUserId == userId)
        {
            printf("%d is the correct user id which user has given already.\n", userId);
            printf("ENTER A PASSWORD PLEASE : \n");
            scanf("%d", &pwd);
            printf("ENTER THE PASSWORD FOR VALIDATION : \n");
            scanf("%d", &validPassword);

            if (validPassword > 0 && validPassword != 0)
            {
                if (validPassword == pwd)
                {
                    printf("%d is the correct password which user has already given.\n", pwd);
                }
                else
                {
                    printf("%d is Incorrect password.\n", pwd);
                }
            }
            else
            {
                printf("%d is Invalid password!\n", validPassword);
            }
        }
        else
        {
            printf("%d is not the correct user id.\n", userId);
        }
    }
    else
    {
        printf("Sorry! %d is not valid user id.\n", validUserId);
    }

    return 0;
}
