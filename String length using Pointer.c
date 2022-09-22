//WAP to calculate the length of the string using a pointer
#include<stdio.h>
#define n 1000
int main() 
{
   char s[n];
   char *p;
   int l = 0;
   printf("Enter any word or sentence to know the length of it: ");
   gets(s);
   p = s;
   while(*p != '\0')
   {
   	 l = l + 1;
	 p = p + 1; 
   }
   printf("The length of the given word/sentence is %d",l);
   return 0;
}
