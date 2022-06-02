#include<stdio.h>
struct employee{
char name[5];
int id;
float salary;
};
struct employee e1 {"nani",680,4.4};
printf("Employee Details %d /n", sizeof(e1));
printf("Employee Name %c",e1.name);
printf("Employee id %d", e1.id);
printf("Employee salary %f", e1.salary);
return 0;
}