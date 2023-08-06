//input salary and no. of years he worked in the company.
//calculate and print the bonus given to the emp based on the given conditions.
//  if exp >=5 years ,if salaray>50k then 80% of salary otherwise 60%
//  if exp less than 5 yrs 50% of salary as bonus.
#include<stdio.h>
int main()
{
    int salary,t,bonus;
    printf("Enter the salary in Rs.: ");
    scanf("%d",&salary);
    printf("Enter the time period in years: ");
    scanf("%d",&t);
    if (t>=5)
    {
        if (salary>50000)
        {
            bonus=0.8*salary;
        }
        else
        bonus=0.6*salary;  
    }
    else   
        bonus=0.5*salary;
        printf("\nsalary : Rs.%d",salary);
        printf("\ntime period : %d years",t);
        printf("\nbonus : Rs.%d",bonus);
    return 0;
}
    