//WAP to calculate arithmetic calculations using functions
#include<stdio.h>
#include<math.h>
void power(int a,int b)
{
	int m;
	m = pow(a,b);
	printf("Power of %d and %d is %lli\n",a,b,m);	
}
void add(int a,int b)
{
    int m;
	m = a + b;
	printf("Addition of %d and %d is %d\n",a,b,m);		
}
void sub(int a,int b)
{
	int m;
	m = a - b;
	printf("Subtraction of %d and %d is %d\n",a,b,m);		
}
void mul(int a,int b)
{
	int m,n;
	m = a * b;
	printf("Multiplication of %d and %d is %d\n",a,b,m);		
}
void div(int a,int b)
{
	float m;
	m = a/b;
	printf("Division of %d and %d is %f",a,b,m);	
}

void main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	power(a,b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
