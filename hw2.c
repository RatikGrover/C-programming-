//input a month number 1-12;and print how many 
//days are there in the given month;
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Input a number : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("There are 31 days in the given month.");
        break;
    case 2:
        printf("There are 28 days in the given month.");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("There are 30 days in the given month.");
    default:
    printf("Invalid month number.");
        break;
    }
    return 0;
}
