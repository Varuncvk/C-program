//WAP to check whether the number is even or odd
#include <stdio.h>
int main() {
    int no;
    printf("Enter an integer to check whether it is even or odd: ");
    scanf("%d",&no);
    if(no%2 == 0)
        printf("The given number %d is an even number",no);
    else
        printf("The given number %d is an odd number",no);
    return 0;
}
