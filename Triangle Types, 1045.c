#include<stdio.h>

int main()
{
    double A, B, C, ASQ, BSQ, CSQ, a, b, c;
    scanf("%lg %lg %lg", &A, &B, &C);
    if(A>B && A>C && B>C)
        {a=A; b=B; c=C;}
    else if(C>A && C>B && B>A)
        {a=C; b=B; c=A;}
    else if(B>A && B>C && A>C)
        {a=B; b=A; c=C;}
    else if(A>C && A>B && C>B)
        {a=A; b=C; c=B;}
    else if(C>A && C>B && A>B)
        {a=C; b=A; c=B;}
    else if(B>C && B>A && C>A)
        {a=B; b=C; c=A;}

    ASQ = a*a;
    BSQ = b*b;
    CSQ = c*c;
    //1
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");

        if(a==b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b || a==c || b==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }

    }

    //2
    else if(ASQ = BSQ+CSQ)
    {
        printf("TRIANGULO RETANGULO\n");

        if(a==b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b || a==c || b==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    //3
    else if(ASQ > BSQ+CSQ)
    {
        printf("TRIANGULO OBTUSANGULO\n");

        if(a==b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b || a==c || b==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    //4
    else if(ASQ < BSQ+CSQ)
    {
        printf("TRIANGULO ACUTANGULO\n");

        if(a==b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }

        else if(a==b || a==c || b==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }

    }

    return 0;
}

