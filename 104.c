/*
    Program: Write a C program to check entered password of user is valid or not based on
    his\her user id.
*/

#include <stdio.h>

int main()
{
    int userId;
    int pwd;
    int validUserId;
    int validPassword;

    printf("ENTER YOUR USER ID : \n");
    scanf("%d", &userId);
    printf("ENTER THE USER ID FOR VALIDATION PURPOSE : \n");
    scanf("%d", &validUserId);

    switch (validUserId > 0 && validUserId != 0)
    {
    case 1:
    {
        // printf("%d is valid user id. \n", validUserId);
        switch (validUserId == userId)
        {
        case 1:
        {
            printf("%d is correct user id. \n", userId);
            printf("ENTER YOUR PASSWORD PLEASE : \n");
            scanf("%d", &pwd);
            printf("ENTER THE PASSWORD FOR VALIDATION PURPOSE : \n");
            scanf("%d", &validPassword);
            switch (validPassword > 0 && validPassword != 0)
            {
            case 1:
            {
                // printf("%d is the valid password!", validPassword);
                switch (validPassword == pwd)
                {
                case 1:
                {
                    printf("%d is the correct password.\n", pwd);
                    printf("Great. The process has done.\n");
                }
                break;
                case 0:
                {
                    printf("%d is Incorrect password!\n", pwd);
                }
                break;
                }
            }
            break;
            case 0:
            {
                printf("%d is Invalid password!\n", validPassword);
            }
            break;
            }
        }
        break;
        case 0:
        {
            printf("%d is Incorrect user id.\n", userId);
        }
        break;
        }
    }
    break;
    case 0:
    {
        printf("%d is Invalid user id.\n", validUserId);
    }
    break;
    }

    getch();
}
