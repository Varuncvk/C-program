//WAP to find maximum number between two numbers using pointers
#include <stdio.h>
int main()
{
	int x,y;
	int *p=&x,*q=&y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	if(*p > *q)
	 printf("Maximum number between two given numbers is %d i.e. x",*p);
	else if(*p < *q)
	 printf("Maximum number between two given numbers is %d i.e. y",*q);
	else
	printf("Given two numbers are equal. so, maximum number is %d",*p);
	return 0;	
}
