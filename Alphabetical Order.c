//WAP to sort a list of numbers in alphbetical order
#include <stdio.h>
#include <string.h>
#define m 20
    void main()
    {
        char a[m][m],b[m][m],c[m];
        int i,j,n;
        printf("Enter the required number of words: \n");
        scanf("%d", &n);
        printf("Enter %d words \n", n);
        for(i=0;i<n;i++) 
        {
            scanf("%s",a[i]);
            strcpy(b[i],a[i]);
        }
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if (strcmp(a[i],a[j]) > 0) 
                {
                    strcpy(c,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],c);
                }
        printf("Input Names              Sorted names\n");
        for(i=0;i<n;i++) 
        {
            printf("Input name %d is %s \t\t Sorted name %d is %s\n",i+1,b[i],i+1,a[i]);
        }
    }
