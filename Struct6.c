/* Self practice on Structures:- a. Using one structure into other, b. Nested structure */

#include<stdio.h>

struct date
{
    int dd;
    char month[15];
    int yy;
};

struct employee
{
    int emp_id;
    struct NAME // Nested structure
    {
        char f_name[15];
        char m_name[15];
        char l_name[15];
    }name;

    float salary;
    struct date doj; // using date structure into employee structure
    struct date dob;
};


int main()
{
    struct employee emp;

    printf("\n Please enter the employee ID: ");
    scanf("%d",&emp.emp_id);

    printf("\n Please enter employee first, middle and last name :: ");
    scanf("%s%s%s",&emp.name.f_name, &emp.name.m_name, &emp.name.l_name);

    printf("\n Please enter Date of birth of employee as date- month name and year:: ");
    scanf("%d%s%d",&emp.dob.dd, &emp.dob.month, &emp.dob.yy);

    printf("\n Please enter Date of joining of employee as date- month name and year:: ");
    scanf("%d%s%d",&emp.doj.dd, &emp.doj.month, &emp.doj.yy);

    printf("\n Please enter the employee's salary:: ");
    scanf("%f",&emp.salary);

    printf("\n /*****************************************************/\n");

    printf("\n Here is the employee entered details:: \n");
    printf("\n Employee ID = %d, Name = %s %s %s, ",emp.emp_id, emp.name.f_name, emp.name.m_name, emp.name.l_name);
    printf("DOB= %d-%s-%d, DOJ= %d-%s-%d,",emp.dob.dd, emp.dob.month, emp.dob.yy, emp.doj.dd, emp.doj.month, emp.doj.yy);
    printf(" Salary= %f",emp.salary);

    printf("\n\n /*****************************************************/");


    return 0;
}