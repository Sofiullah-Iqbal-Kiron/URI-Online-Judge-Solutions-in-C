#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c && b>c)
    {
        printf("%d\n%d\n%d", c, b, a);
    }
    else if(c>a && c>b && b>a)
    {
        printf("%d\n%d\n%d", a, b, c);

    }
    else if(b>a && b>c && a>c)
    {
        printf("%d\n%d\n%d", c, a, b);

    }
    else if(a>c && a>b && c>b)
    {
        printf("%d\n%d\n%d", b, c, a);

    }
    else if(c>a && c>b && a>b)
    {
        printf("%d\n%d\n%d", b, a, c);

    }
    else if(b>c && b>a && c>a)
    {
        printf("%d\n%d\n%d", a, c, b);

    }
    printf("\n\n%d\n%d\n%d", a, b, c);

    return 0;
}
