/*Self practice on Structure using Functions*/

#include<stdio.h>

struct employee
{
    int emp_id;
    char name[40];
    float salary;

};

void accept_data(struct employee *d1);//here we're going to make changes in structure, so pass by address
void print_data(struct employee d1);// We're not going make any changes, so pass by value


int main()
{
    struct employee emp;

    printf("\n Please enter the employee details:: ");
    accept_data(&emp); 

    printf("\n The entered details of employee is :: ");
    print_data(emp);

    return 0;
}

void accept_data(struct employee * d1)
{
    
        printf("\n Please enter the employee ID and the name:: ");
        scanf("%d%*c%[^\n]s",&d1->emp_id, &d1->name);

        printf("\n Please enter the Employee's Salary:: ");
        scanf("%f",&d1->salary);

}

void print_data(struct employee d1)
{
    
        printf("\n Employee ID= %d, Name= %s, Salary= %.2f  ", d1.emp_id, d1.name, d1.salary);

}