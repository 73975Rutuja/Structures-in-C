/*Self practice on Array structure and also using Macros*/

#include<stdio.h>
#define SIZE 3

struct student
{
    int roll_no;
    char name[40];
    float pert;
};

int main()
{
    struct student s1[SIZE];

    printf("\n Please enter the student details:: ");

    for(int i=0; i<SIZE; i++)
    {
        printf("\n The details of student %d\n",i+1);
        printf("Roll_no= ");
        scanf("%d",&s1[i].roll_no);

        printf(" Student name = ");
        scanf("%*c%[^\n]s",s1[i].name);

        printf(" Student percentage= ");
        scanf("%f",&s1[i].pert);
    }
    
    printf("\n The entered Student's details are as follows :: ");

    for(int i=0; i<SIZE; i++)
    {
        printf("\n Student Roll no= %d, Name= %s, Percentage= %.2f%% ",s1[i].roll_no, s1[i].name,s1[i].pert);
    }
    return 0;
}