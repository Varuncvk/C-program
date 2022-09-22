//WAP to store n elments in an array and to print those elments using pointers
#include<stdio.h>
int main()
{
	int n,a[n],i,c;
	int *p=a;
	printf("Enter number of elments to store in an array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  printf("Enter element %d in an array: ",i+1);
	  scanf("%d",&a[i]);
    }
    printf("\nThe elements you entered are %d. They are: \n",n);
    for(i=0;i<n;i++)
    {
    	printf("The element %d you entered is %d\n",i+1,*p);
    	p = p + 1;
	}
	return 0;
}
