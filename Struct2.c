/*Self practice on Anonymous structure*/

#include<stdio.h>

struct 
{

    int emp_id;
    char name[50];
    float salary;
}emp; // this the variable of anonymous structure

int main()
{
    printf("\n Please enter the employee details:: ");
    printf("\n Please give the employee ID:: ");
    scanf("%d",&emp.emp_id);

    printf("\n Please enter the employee name :: ");
    scanf("%*c%[^\n]s",&emp.name);

    printf("\n Please enter the salary of the employee:: ");
    scanf("%f",&emp.salary);

    printf("\n The employee details are :: ");
    printf("\n Employee ID = %d, Employee name = %s, Employee salary = %.2f  ",emp.emp_id, emp.name, emp.salary);

    return 0;
}