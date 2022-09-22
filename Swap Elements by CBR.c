//WAP to swap the given elements using call by reference
#include <stdio.h>
void swap(int*,int*,int*);
void main()
{
    int a,b,c;
	printf("Enter three numbers to reverse the order :\n"); 
    printf("Enter a number of 1st element : ");
    scanf("%d",&a);
	printf("Enter a number of 2nd element : ");
	scanf("%d",&b);
	printf("Enter a number of 3rd element : \n");
    scanf("%d",&c);
    printf("The numbers before swapping are :\n");
    printf(" Number in element 1 = %d\n",a);
    printf(" Number in element 2 = %d\n",b);
    printf(" Number in element 3 = %d\n",c);
    swap(&a,&b,&c);
    printf("\n The numbers after swapping are :\n");
    printf(" Number in element 1 = %d\n",a);
    printf(" Number in element 2 = %d\n",b);
    printf(" Number in element 3 = %d\n",c);
}
void swap(int*a,int*b,int*c)
{
    int v;
    v = *b;
    *b = *a;
    *a = *c;
    *c = v;
}
