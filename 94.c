// Write a C program to find roots of a quadratic function using conditional statement.

/*#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, x1, x2, d;

    printf("Enter the values of a b & c : \n");
    scanf("%f%f%f", &a, &b, &c);

    // Here, d = discriminant;
    d = b*b - 4*a*c;

    if (d>0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("X1 & X2 = %f%f\n",x1,x2);
    }
    else if (d==0)
    {
        x1 = -b / (2*a);
        x2 = -b / (2*a);
        printf("X1 & X2 = %f%f\n",x1,x2);
    }
    else
    {
        printf("Roots are imaginary.\n");
    }

    //return 0;
    getch();
}
*/


# include<stdio.h>
# include<math.h>

int main () {
    float a,b,c;
    float r1,r2;
    float d;

    printf ("Enter the values of a b c: ");
    scanf (" %f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d>0) {
        r1 = -b+sqrt (d) / (2*a);
        r2 = -b-sqrt (d) / (2*a);
        printf ("The real roots = %f %f", r1, r2);
    }
    else if (d==0) {
        r1 = r2= -b/(2*a);
        printf ("Roots are equal =%f %f", r1, r2);
    }
    else
        printf("Roots are imaginary");

    return 0;
}
