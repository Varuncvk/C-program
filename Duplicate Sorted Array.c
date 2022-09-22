//WAP to remove the duplicate or repeated numbers in the sorted array
#include <stdio.h>  
int main()  
{  
    int a[20],i,j,k,n;  
    printf("Give the number of elements in an array: ");  
    scanf("%d",&n);  
    printf("\nEnter %d elements of an array: \n ",n);  
    for(i=0;i<n;i++)  
    {  
        scanf("%d",&a[i]);  
    } 
    for(i=0;i<n;i++)  
    {  
        for(j=i+1;j<n;++j)
        {
            if (a[i]>a[j]) 
            {
                k =  a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below: \n");
    for (i=0;i<n;++i)
      printf("%d ",a[i]);
    for(i=0;i<n;i++)  
    {  
        for(j=i+1;j<n;j++)  
        {  
            if(a[i] == a[j])  
            {  
                for(k=j;k<n-1;k++)  
                {  
                    a[k] = a[k + 1];  
                } 
                n--;  
                j--;      
            }  
        }  
    }
    printf ("\nArray elements after deletion of the duplicate elements: \n");
    for(i=0;i<n;i++)  
    {  
        printf (" %d ", a[i]);  
    }
    return 0;
}
