//switch statement
//MENU DRIVEN PROGRAM
#include<stdio.h>
int main()
{
    float n1,n2,result;
    int choice;
    printf("\nEnter two numbers : \n");
    scanf("%f %f",&n1,&n2);
    printf("\n*******************");
    printf("\n    CALCULATOR     ");
    printf("\n*******************\n");
    printf("\nPress 1-Add");
    printf("\nPress 2-Subtract");
    printf("\nPress 3-Multiply");
    printf("\nPress 4-Divide");
    printf("\nEnter a choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        result=n1+n2;
        break;
    case 2:
        result=n1-n2;
        break;
    case 3:
        result=n1*n2;
        break;
    case 4:
        result=n1/n2;
    default:
        printf("Invalid choice selected");
    }
    printf("\n*******************");
    printf("\nThe result is : %.2f",result);
    printf("\n*******************");
    printf("\n");
    return 0;
}
