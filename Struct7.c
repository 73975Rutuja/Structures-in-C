/*Self practice on Structures using pointer notations */

#include<stdio.h>

struct date
{
    int dd;
    char month[20];
    int yy;
};

int main()
{
    struct date D1 ;
    struct date *dptr = &D1;

    printf("\n Please enter a date:: ");
    scanf("%d%s%d",&dptr->dd, &dptr->month, &dptr->yy);

    printf("\n The entered date is :: %d-%s-%d  ",dptr->dd, dptr->month, dptr->yy);


    return 0;
}