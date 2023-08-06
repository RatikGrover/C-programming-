//q3, enter principle amount and time in years for term deposit in the bank.
    //print the interest earned over the amount deposited .
    //if rate of interest is 4% for 2 years.
    //                       6% for 2-4years.
    //                       7% for more than 4years.
    #include<stdio.h>
    int main()
    {
        float p,t,i,r;
        printf("Enter the principle amount : ");
        scanf("%f",&p);
        printf("Enter the time period in years : ");
        scanf("%f",&t);
        if (t<2)
            r=0.04;
        else if (t<=4)
            r=0.06;
        else
            r=0.07;
        
        i=r*p*t;
        printf("\nTime period : %.2f years",t);
        printf("\nPrinciple amount deposited : Rs.%.2f",p);
        printf("\nRate of interest : %.2f%%",r*100);
        printf("\nInterest to be received : Rs.%.2f",i);
        return 0;
    }
    