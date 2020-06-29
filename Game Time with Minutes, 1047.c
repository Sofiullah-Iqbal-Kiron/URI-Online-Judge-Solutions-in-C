#include<stdio.h>
int main()
{
    int ih, im, fh, fm;
    scanf("%d %d %d %d", &ih, &im, &fh, &fm);
    if(ih<fh)
    {
        if(im<fm)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", fh-ih, fm-im);
        }
        else if(fm<im)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (fh-ih)-1, (60-im)+fm);
        }
    }
    else if(ih>fh)
    {
        if(im<fm)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (24-ih)+fh, fm-im);
        }
        else if(fm<im)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-ih)+fh, (60-im)+fm);
        }
    }
    else if(ih==fh && im==fm)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    return 0;
}
