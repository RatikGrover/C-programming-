//question 2_input 3 sides of a triangle and check if its equilateral or not
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter the 3 sides of a triangle in cm : \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && b==c)
        printf("\nEquilateral triangle");
        else
        printf("Not an equilateral triangle");   
    return 0;
}
