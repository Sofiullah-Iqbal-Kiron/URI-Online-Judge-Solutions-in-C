#include<stdio.h>
int main()
{
    float N;
    int r100, r50, r20, r10, r5, r2, r1; int rp50, rp25, rp10, rp05, rp01;
    scanf("%f", &N);
    int M = N;
    float P=N-M;
    int o = P*100;
    rp50 = o/50;
    rp25 = (o%50)/25;
    rp10 = ((o%50)%25)/10;
    rp05 = (((o%50)%25)%10)/5;
    rp01 = ((((o%50)%25)%10)%5)+1;

    r100 = M/100;
    r50 = (M%100)/50;
    r20 = ((M%100)%50)/20;
    r10 = (((M%100)%50)%20)/10;
    r5 = ((((M%100)%50)%20)%10)/5;
    r2 = (((((M%100)%50)%20)%10)%5)/2;
    r1 = ((((((M%100)%50)%20)%10)%5)%2)/1;

    printf("NOTAS:\n");
    printf("%d notas de R$ 100.00\n", r100);
    printf("%d notas de R$ 50.00\n", r50);
    printf("%d notas de R$ 20.00\n", r20);
    printf("%d notas de R$ 10.00\n", r10);
    printf("%d notas de R$ 5.00\n", r5);
    printf("%d notas de R$ 2.00\n", r2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", r1);
    printf("%d moeda(s) de R$ 0.50\n", rp50);
    printf("%d moeda(s) de R$ 0.25\n", rp25);
    printf("%d moeda(s) de R$ 0.10\n", rp10);
    printf("%d moeda(s) de R$ 0.05\n", rp05);
    printf("%d moeda(s) de R$ 0.01\n", rp01);

    return 0;
}
