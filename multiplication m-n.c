//WAP to print the multiplication table of a number m upto n
#include<stdio.h>
int main()
{
	int m,n,i,c;
	printf("Enter m and n value:");
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		c = i*n;
		printf("%d X %d = %d\n",m,i,c);
	}
	return 0;
}
