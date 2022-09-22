//WAP to get number of composite numbers in an array
#include <stdio.h>
int main()
{
    int num,value,i;
    printf("Enter a number to check whether it is composite or not: ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i == 0)
          value = value + 1;
    }
    if(value>2)
      printf("The give number is a composite number");
    else
      printf("The given number is not a composite number");
    return 0;
}
