//WAP to reverse an array
#include <stdio.h>
int main()
{
    int num,i,value,a[num];
    printf("Enter the number of elements in an array: ");
    scanf("%d",&num);
    printf("Enter array elements to reverse the numbers: ");
    for(i=0;i<num;i++)
      scanf("%d",&a[i]);
    for(i=0;i<num/2;i++)
    {
        value = a[i];
        a[i] = a[num-i-1];
        a[num-i-1] = value;
    }
    for(i=0;i<num;i++)
       printf("Reverse of an elements at index %d is %d\n",i,a[i]);
}
