//WAP to perform matrix addition
#include <stdio.h>
#define m 100
int main() 
{
  int r,c,a[m][m],b[m][m],sum[m][m],i,j;
  printf("Enter the required number of rows : ");
  scanf("%d", &r);
  printf("Enter the required number of columns : ");
  scanf("%d", &c);
  printf("\nEnter %d elements of 1st matrix:\n",r*c);
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) 
	{
      printf("Enter element a[%d%d] of matrix 1: ", i , j );
      scanf("%d", &a[i][j]);
    }
  printf("\nEnter %d elements of 2nd matrix:\n",r*c);
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) 
	{
      printf("Enter element b[%d%d] of matrix 2: ", i, j);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) 
	{
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\n\nThe obtained matrix by Sum of two given matrices : \n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) 
	{
      printf("The element c[%d][%d] is %d\n",i,j,sum[i][j]);
    }
  return 0;
}
