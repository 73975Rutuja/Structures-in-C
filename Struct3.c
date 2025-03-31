/*Self practice on typedef anonymous structure*/

#include<stdio.h>

typedef struct
{
    int dd;
    char month[20];
    int yy;
}DATE; // this is the name of the anonymous structure

int main()
{
    DATE D; // this is the variable creation of the anonymous structure with name as DATE

    printf("Please enter the date of birth in dd month name and yy :: ");
    scanf("%d%s%d",&D.dd,D.month,&D.yy);

    printf("\n The entered date of birth is :: %d-%s-%d  ",D.dd,D.month,D.yy);

    return 0;
}
