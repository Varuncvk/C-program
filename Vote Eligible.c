//WAP to find whether the person is elegible for vote or not
#include<stdio.h>
int main()
{
	float age,no;
	printf("Enter the age of the person: ");
	scanf("%f",&age);
	if(age>=18)
	{
	  printf("HEY! You are eligible to vote");
    }
	else if(age>=0 && age<18)
	{
		no = 18 - age;
		printf("You are eigible for voting after %.2f years",no);
	}
	else 
	    printf("Given input age is Invalid");	
	return 0;
}
