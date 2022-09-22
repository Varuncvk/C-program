//WAP to find number of negative elements in an array
#include <stdio.h>
int main()
{
    int num,i,a[num],sum=0;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&num);
    printf("Enter array elements to reverse the numbers: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
       if(a[i]<0)
         sum = sum + 1;
    }
    printf("Number of negative elements in an array are %d",sum);
    return 0;
}
