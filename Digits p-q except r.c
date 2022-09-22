//WAP to print the digits from P to Q except the given digit R using continue statement
#include <stdio.h> 
#define m 100
int main() 
{
	int p,q,r,i;
	printf("Enter two numbers: ");
	scanf("%d%d",&p,&q);
	printf("Enter an element between %d and %d to delete it: ",p,q);Di
	scanf("%d",&r);
    for(i=p;i<=q;i++) 
	{ 
        if (i == r) 
            continue; 
        else
            printf("%d ", i); 
    } 
    return 0; 
}
