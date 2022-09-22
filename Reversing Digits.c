//WAP to change all the digits of a number to bring at the last position
#include <stdio.h>
int main()
{
    int no,rev=0,tem,rem;
    printf("Enter any number to get reverse of the number:\n");
    scanf("%ld",&no);
    tem = no;
    for(;no>0;)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    printf("Given Input number is %ld\n", tem);
    printf("Reverse of a given number is %ld\n", rev);
    return 0;
}
