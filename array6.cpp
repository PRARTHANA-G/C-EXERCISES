/*By using two-dimensional array, write C program to display a table that represents a Pascal triangle 
of any size. In Pascal triangle, the first and the second rows are set to 1.
Each element of the triangle (from the third row downward) is the sum of the element directly above 
it and the element to the left of the element directly above it. See the example Pascal triangle(size=5) 
below: 
1				
1	1			
1	2	1		
1	3	3	1	
1	4	6	4	1
*/

#include<stdio.h> 
#include<stdlib.h> 


void displaypascal(int size)
{
 
	int pascaltriangle[100][100];
	int i,j;
	
	printf("PASCAL TRIANGLE (size = %d)\n", size);
	
	//assign 1 to every array element
	for (i=0;i,i<size;i++){
		for (j=0;j<size;j++) pascaltriangle[i][j]=1;}

	//assign the rest of the array
	for (i=2;i,i<size;i++){
		pascaltriangle[i][0]=1;
		for (j=1;j<i;j++) {pascaltriangle[i][j]=pascaltriangle[i-1][j-1]+pascaltriangle[i-1][j];}}
	
	//print the pascaltriangle
	for (i=0;i<size;i++)
	{
		for (j=0;j<=i;j++) printf("%d\t", pascaltriangle[i][j]);
		printf("\n");
	}
}
	
int main()
{
	int size;
	printf("Please input the size (>=3)of pascal triangle:"); scanf("%d", &size);
	
	displaypascal(size);
system("PAUSE");
return 0;
}
 
