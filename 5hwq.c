
//question no.1 _ input an year and check if its a leap year.
//(nesting of if else)

#include<stdio.h>
int main()
{
    int year;
    printf("\nInput a year : ");
    scanf("%d",&year);
    if (year%100==0)
    {
        if(year%400==0)
        printf("the year is a leap year");
        else
        printf("the year is not a leap year");
    }
    else
    {
        if(year%4==0)
        printf("the year is a leap year");
        else
        printf("the year is not a leap year");

    }
    return 0;
}

