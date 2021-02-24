#include <stdio.h>

int main()
{
  int arr1[3][3],i,j, a, b, rows, columns, p[10][10], Sum = 0;

       printf("\n\nRead a 2D array of size 3x3 and print it:\n");


    /* Stored values into the array*/
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
      }

 printf("\nThe valus in matrix form is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");

 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &a, &b);

 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < a; rows++)
  	{
   		for(columns = 0;columns < b;columns++)
    	{
      		scanf("%d", &p[rows][columns]);
    	}
  	}

 	for(rows = 0; rows < a; rows++)
  	{
   		Sum = Sum + p[rows][rows];
  	}

 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}
