//WAP to find the largest element using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    double *p;
    printf("Enter total number of elements that you want in an array: ");
    scanf("%d",&n);
    p = (double*)calloc(n,8);
    if(p == NULL)
    {
        printf("There is no memory allocated at here");
    }
    for(i=0;i<n;++i)  
    {
       printf("\nEnter the %dst element: ",i+1);
       scanf("%lf",p+i);
    }
    for(i=1;i<n;++i)  
    {
       if(*p<*(p+i)) 
           *p=*(p+i);
    }
    printf("\nThe Largest element in an array is: %.4lf",*p);
    return 0;
}
