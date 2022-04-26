#include<stdio.h>
int main()
{
	int a;
	int b;
	int temp;
	printf("Enter a value:");
	scanf("%d: \n", &a);
	printf("Enter b value:");
	scanf("%d: \n", &b);
	printf("Before Swapping %d \n", a);
	printf("Before Swapping %d \n", b);
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping %d \n", a);
	printf("After Swapping %d \n", b);
	return 0;
}