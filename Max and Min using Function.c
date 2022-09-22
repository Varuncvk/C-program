//WAP to find out maximum and minimum of some values using function which will return an array
#include<stdio.h>
#define m 1000
int mm(int[],int);
int main()
{
    int n,a[m],i;
    printf("Enter number of elements that you want in an array : ");
    scanf("%d", &n);
    printf("Enter %d elements in an array : \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mm(a,n);
}
int mm(int a[m],int n)
 {
 	int min,max,i,c;
 	min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
    printf("Minimum value in an array is : %d\n",min);
    printf("Maximum value in an array is : %d",max);
 }
