/*Self practice on Structures 1*/

#include<stdio.h>

struct student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
   
    struct student s1 = {01, "My_name", 80.78}; // this is called as Structure initialization
    
    printf("\n The student details are :: \n");
    printf("\n Roll no.= %d,  Name = %s,  Marks = %.2f  ", s1.roll_no, s1.name, s1.marks);

    return 0;
}