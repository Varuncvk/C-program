//WAP to find the given value is perfect number or not
# include <stdio.h>   
int main()   
{   
 int i,no,sum=0 ;   
 printf("Enter any number to know whether it is perfect or not: \n") ;   
 scanf("%d",&no) ;   
 for(i=1;i<no;i++)   
  {   
   if(no % i == 0)   
     sum = sum + i ;   
  }    
 if (sum == no)   
    printf("\nThe given number %d is a Perfect Number\n",no) ;   
 else   
    printf("The given number %d is not a Perfect Number",no) ;    
 return 0 ;   
}
