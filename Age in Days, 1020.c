#include<stdio.h>
int main()
{
    int days, ano, mes, dia;
    scanf("%d", &days);
    ano = days/365;
    mes = (days%365)/30;
    dia = ((days%365)%30);
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}
