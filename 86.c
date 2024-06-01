// Write a C program to check whether an alphabet is vowel or consonant using switch case.

#include<stdio.h>

int main()
{
    char ch;

    printf("Please Enter an alphabet : \n");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
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
            printf("%c is a Vowel. \n", ch);
            break;
        }
        default :
        {
            printf("%c is a Consonant. \n", ch);
        }
        }
    }

    else
    {
        printf("Sorry! %c is not a Letter.\n", ch);
    }

    getch();
}
