//WAP to store information of n students in structure and display it
#include <stdio.h>
#define m 1000
struct student_info 
{
    char name[m];
    int roll_no;
    float marks;
};
int main() 
{
    int n,i;
    struct student_info student[m];
    printf("Enter number of students that you want: ");
    scanf("%d",&n);
    if(n>0)
    {
      for(i=0;i<n;i++)
      {
          printf("\nEnter information of student %d: ",i+1);
          printf("\nEnter name of student %d: ",i+1);
          scanf("%s", &student[i].name);
          printf("Enter roll number of student %d: ",i+1);
          scanf("%d", &student[i].roll_no);
          printf("Enter marks of student %d: ",i+1);
          scanf("%f", &student[i].marks);
      }
      printf("\nDisplaying information of given %d students: ",n);
      for(i=0;i<n;i++)
      {
         printf("\n\nName of student %d: %s\n",i+1,student[i].name);
         printf("Roll number of student %d: %d\n",i+1,student[i].roll_no);
         printf("Marks of student %d: %.1f\n",i+1,student[i].marks);
      }
	}
      else if(n<0)
	  printf("Please enter a positive integer value");
	else
	  printf("Invalid input value");
    return 0;
}
