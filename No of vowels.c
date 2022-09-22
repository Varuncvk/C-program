//WAP to print the number of vowels in the given statement
#include <stdio.h>
#include <string.h>
#define m 100
void main()
{
	char a[m];
	int l,i,v=0;
	printf("\nEnter any word/sentence to know number of vowels in it: ");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
      if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
	    v++;
	}
	printf("\nThere are %d vowels in the given word/sentence",v);
}
