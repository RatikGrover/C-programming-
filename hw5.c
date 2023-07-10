#include<stdio.h>
int main()
{
    int cost,quantity,amount,discount,netAmount;
    printf("Enter the cost of the product in Rs :");
    scanf("%d",&cost);
    printf("Enter the quantity of the product :");
    scanf("%d",&quantity);
    amount=cost*quantity;
    printf("\nThe cost of product purchased is: %d",amount);
    discount=amount/10;
    printf("\nThe discount on product purchased is 10%%: %d",discount);
    netAmount=amount-discount;
    printf("\nThe netAmount to be paid on product purchased is: %d",netAmount);
    return 0;
}
