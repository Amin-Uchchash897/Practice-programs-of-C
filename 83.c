// Write a program to make a calculator with switch statement.

#include<stdio.h>

int main()
{
    int number1, number2;
    char operation;

    printf("Please Enter a Operator: \n");
    scanf("%c", &operation);
    printf("Please Enter Two Numbers : \n");
    scanf("%d%d", &number1, &number2);

    switch(operation)
    {
    case '+' :
    {
        printf("%d + %d = %d\n", number1, number2, number1 + number2);
        break;
    }

    case '-' :
    {
        printf("%d - %d = %d\n", number1, number2, number1 - number2);
        break;
    }

    case '*' :
    {
        printf("%d * %d = %d\n", number1, number2, number1 * number2);
        break;
    }

    case '/' :
    {
        printf("%d / %d = %d\n", number1, number2, number1 / number2);
        break;
    }
    }

    getch();
}
