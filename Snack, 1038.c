#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    double price = 0;

    if(X==1)
    {
        price = Y*4.00;
    }
    else if(X==2)
    {
        price = Y*4.50;
    }
    else if(X==3)
    {
        price = Y*5.00;
    }
    else if(X==4)
    {
        price = Y*2.00;
    }
    else if(X==5)
    {
        price = Y*1.00;
    }
    printf("Total: R$ %.2lf\n", price);

    return 0;
}
