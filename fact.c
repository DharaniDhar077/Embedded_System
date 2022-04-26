#include<stdio.h>
int main()
{
	int a;
	int fact=1;
	int number;
	printf("Enter a number:");
	scanf("%d: \n", &number);
	for(a=1;a<=number;a++)
	fact=fact*a;
	{
	printf("%d \n", fact);
	printf("%d \n", number);
	}
	return 0;
}