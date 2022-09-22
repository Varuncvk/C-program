//WAP to calculate arithmetic operations
#include <stdio.h>
int main()
{
    int a,b,sum,sub,mul,mod;
    float div;
    printf("Enter any two numbers to calculate arithmetic operations: ");
    scanf("%d%d",&a,&b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;
    mod = num1 % num2;
    printf("Addition of two given numbers %d and %d is = %d\n",a,b,sum);
    printf("Subtraction of two given numbers %d and %d is = %d\n",a,b,sub);
    printf("Multiplication of two given numbers %d and %d is = %d\n",a,b,mul);
    printf("Division of two given numbers %d and %d is = %d\n",a,b,div);
    printf("Modulus of two given numbers %d and %d is = %d\n",a,b,mod);
    return 0; 
}
