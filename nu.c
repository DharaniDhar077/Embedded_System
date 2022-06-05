#include<stdio.h>
union un{
	int a;
	float b;
};
int main(){
union un g;
printf("%ld: \n", sizeof (union un));
printf("%ld: \n", sizeof (g));
g.a=10;
g.b=20.1;
printf("%d: \n", g.a);
printf("%f: \n", g.b);
return 0;
}