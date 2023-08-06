//question 3_to calculate electricity bill
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int units;
    printf("Enter the number of units consumed : ");
    scanf("%d",&units);
    if (units<=200)
    {
        printf("Your bill is 0");
    }
    if (units<=400&&units>200)
    {
        printf("Your bill is %d",units*4);
    }
    if (units<=700&&units>400)
    {
        printf("Your bill is %d",units*6);
    }
    if (units>700)
    {
        printf("Your bill is %d",units*8);
    } 
    return 0;
}
