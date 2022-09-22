//WAP to divide the given number into individuals and adds those individual digits
#include <stdio.h>
int main()
{
	int no,r,s=0;
	printf("Enter any positive integer: ");
	scanf("%d",&no);
	if(no<0)
	 printf("The given input must be a positive integer");
	if(n<0)
	{
	  for(;no>0;)
      {
        r = no % 10;
        no = no / 10;
        s = s + r;
      }
      printf("The sum of individual digits of a given positive integer is %d",s);
    }
    return 0;
}
