//WAP to sum a two given numbers using call by reference method
#include<stdio.h>
int sum(int *x,int *y)
{
	int c;
	c = *x + *y;
	return c;
}
int main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	c = sum(&a,&b);
	printf("Sum of two given numbers %d and %d is %d",a,b,c);
	return 0;
}
