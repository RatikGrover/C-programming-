#include<stdio.h>
int main()
{
    float a,b,h;
    printf("Enter the height of the triangle in cm:\n");
    scanf("\n%f",&h);
    printf("Enter the base of the triangle in cm:\n");
    scanf("\n%f",&b);
    a=(b*h)/2;
    printf("\nThe area of the triangle is: %.2f",a);
    return 0;
}
