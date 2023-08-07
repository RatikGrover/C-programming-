//input length and breath of a reactangle.
//ask the user to choose from area and perimeter show the result as per option selected
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p,a,l,b,choice;
    printf("Input length and breath of a rectangle : \n");
    scanf("%d %d",&l,&b);
    printf("Press -1 for perimeter\n");
    printf("Press -2 for area\n");
    scanf("%d",&choice);
    p=2*(l+b);
    a=l*b;
    switch (choice)
    {
    case 1:
        printf("Perimeter is = %d",p);
        break;
    case 2:
        printf("Area is = %d",a);
        break;
    default:
        printf("Invalid choice.");
    }
    return 0;
}
