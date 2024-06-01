// Write a C program to find roots of a quadratic function using switch case.
// d(discriminant) = sqrt(b*b - 4*a*c);
// (double) x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
// (double) x2 = (-b-sqrt(b*b-4*a*c))/(2*a);

#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c;
    float d, x1, x2;

    printf("Enter Three values of a b & c :\n");
    scanf("%f%f%f", &a, &b, &c);

    d = sqrt(b*b-4*a*c);

    x1 = (-b+d)/(2*a);
    printf("X1 = %f\n", x1);

    x2 = (-b-d)/(2*a);
    printf("X2 = %f\n", x2);

    getch();
}
