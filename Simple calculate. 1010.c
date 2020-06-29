/* Program statements...
In this problem, the task is to read a code of a product 1,
the number of units of product 1, the price for one unit of product 1,
the code of a product 2, the number of units of product 2 and the price for one unit of product 2.
After this, calculate and show the amount to be paid.

Input
The input file contains two lines of data.
In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

Output
The output file must be a message like the following example where "Valor a pagar" means Value to Pay.
Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point. */

#include<stdio.h>

int main()
{
    int code_of_product_1, code_of_product_2, number_of_unit_1, number_of_unit_2;
    float price_one_unit_1, price_one_unit_2, VALOR_A_PAGAR;
    scanf("%d %d %f", &code_of_product_1, &number_of_unit_1, &price_one_unit_1);
    scanf("%d %d %f", &code_of_product_2, &number_of_unit_2, &price_one_unit_2);
    VALOR_A_PAGAR = (number_of_unit_1 * price_one_unit_1) + (number_of_unit_2 * price_one_unit_2);
    printf("VALOR A PAGAR: R$ %.2f\n", VALOR_A_PAGAR);

    return 0;
}
