
#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("Enter a value:");
	scanf("%d: \n", &a);
	printf("Enter b value:");
	scanf("%d: \n", &b);
	printf("%d \n", a|b);
	printf("%d \n", a&b);
	printf("%d \n", a^b);
	return 0;
}