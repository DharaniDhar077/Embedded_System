
#include<stdio.h>
struct employee 
{
char name[10];
int id;
int age;
float salary;
};
int main(){
struct employee e1={"Dharani",680,21,4.4};
struct employee e2={"Suresh",679,30,12};
printf("\n Emp 1 Details :");
printf("size of Employee Details %ld \n", sizeof(e1));
printf("Employee Name : %s \n", e1.name);
printf("size of name %ld \n", sizeof(e1.name));
printf("Employee id : %d \n", e1.id);
printf("size of id %ld \n", sizeof(e1.id));
printf("Employee age : %d \n", e1.age);
printf("size of age %ld \n", sizeof(e1.age));
printf("Employee salary : %f \n", e1.salary);
printf("size of salary %ld \n", sizeof(e1.salary));
printf("\n Emp 2 Details :");
printf("size of Employee Details %ld \n", sizeof(e2));
printf("Employee Name : %s \n", e2.name);
printf("size of name %ld \n", sizeof(e2.name));
printf("Employee id : %d \n", e1.id);
printf("size of id %ld \n", sizeof(e2.id));
printf("Employee age : %d \n", e2.age);
printf("size of age %ld \n", sizeof(e2.age));
printf("Employee salary : %f \n", e2.salary);
printf("size of salary %ld \n", sizeof(e2.salary));
return 0;
}




