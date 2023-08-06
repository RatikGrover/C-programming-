//question 4_input cose and quantity of product.Calculate amount after discount
#include<stdio.h>
int main()
{
    float cost,discount,amount;
    int quantity;
    printf("Enter the cost of the product in RS : ");
    scanf("%f",&cost);
    printf("Enter the quantity of the product : ");
    scanf("%d",&quantity);
    amount = cost*quantity;
    if (amount<1000 && amount>=0)
        discount=0;
    if (amount<3000 && amount>=1000)
        discount=amount*10/100;
    if (amount>=3000 && amount<5000)
        discount=amount*20/100;
    if (amount>=5000)
        discount=amount*30/100;
        printf("\nThe amount came out to be :%.2f\n",amount);
        printf("\nThe discount is %.2f",discount);
        printf("\nAmount to be paid is %.2f :",amount-discount);
    return 0;
}
