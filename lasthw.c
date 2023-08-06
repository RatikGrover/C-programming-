//question 5_length and breath of a rectangular field .Calculate the cost of fencing the field

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int l,b,cost;
    float p;
    char type;
    
    printf("\nInput the length and breath of the rectangular field in 'm' : \n");
    scanf("%d%d",&l,&b);
    p=2*(l+b);
    printf("Perimeter of the field is : %.2fm\n",p);
    printf("\nNow choose from the following fence types \nA\nB\nOther\n");
    fflush(stdin);
    printf("\n");
    scanf("%c",&type);
    if (type=='A')
        cost=p*10;
    else if (type=='B')
        cost=p*15;
    else
        cost=p*12;
        printf("\n\nThe cost of fencing is %d",cost);   
    return 0;
}
