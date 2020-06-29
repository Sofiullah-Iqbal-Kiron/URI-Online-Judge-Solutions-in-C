/* Read 3 floating-point numbers. After, print the roots of bhaskara’s formula.
If it's impossible to calculate the roots because a division by zero or a square root of a negative number,
presents the message “Impossivel calcular”.

Input
Read 3 floating-point numbers A, B and C.

Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate. */

#include<stdio.h>
#include<math.h>

int main()
{
    float A, B, C, D, R1, R2;
    scanf("%f %f %f", &A, &B, &C);
    D = (B*B) - (4*A*C);
    if(D<0 || A==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = (-B+sqrt(D))/(2*A);
        R2 = (-B-sqrt(D))/(2*A);
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }

    return 0;
}
