// Write a C program to check whether an alphabet is vowel or consonant using switch case.

#include<stdio.h>

int main()
{
    char ch;

    printf("Please Enter an alphabet : \n");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        switch(ch)
        {
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        {
            printf("%c is Vowel.\n", ch);
            break;
        }
        default :
            printf("%c is Consonant.\n", ch);
        }
    }
    else
    {
        printf("Error! %c is not an alphabet.\n", ch);
    }

    getch();
}
