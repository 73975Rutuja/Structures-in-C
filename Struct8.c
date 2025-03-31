/*Self practice on comparing the data in the structures and using nested if loop */

#include<stdio.h>

struct date
{
    int dd;
    int mm;
    int yy;
};

int main()
{
    struct date D1;

    printf("\n Please enter a date:: ");
    scanf("%d%d%d",&D1.dd, &D1.mm, &D1.yy);

    printf("\n The entered date is :: %d-%d-%d  ",D1.dd, D1.mm, D1.yy);

    if(D1.dd==01 && D1.mm==01) 
        printf("\n HAPPY NEW YEAR !!!  ");

    else if(D1.dd==28 && D1.mm==04)
        printf("\n HAPPY BIRTHDAY TO YOU !!! ");

    else if(D1.dd==01 && D1.mm==04)
        printf("\n April's Fool !!! ");

    else
        printf("\n Have a Good day ahead !!! ");

    return 0;
}