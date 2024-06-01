// Write a C program to print all alphabets from a to z. – using while loop

#include <stdio.h>

int main()
{
    char ch = 97;

    printf("Please enter a character : \n");
    scanf("%c", &ch);

    printf("Apphabets from (a-z) are : \n");
    while (ch <= 122)
    {
        printf("%c\n", ch);
        ch++;
    }

    getch();
}