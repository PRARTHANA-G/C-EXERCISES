/*By using two-dimensional array, write C program to display a matrix as shown below: 
0	1	1	1	1	 
-1	0	1	1	1
-1	-1	0	1	1
-1	-1	-1	0	1
-1	-1	-1	-1	0 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int matrix[5][5];
	int i,j;

	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if (i==j) {matrix[i][j]=0; printf("%d\t", matrix[i][j]);}
			else if (i<j) {matrix[i][j]=1; printf("%d\t", matrix[i][j]);}
			else  {matrix[i][j]=-1; printf("%d\t", matrix[i][j]);} 
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
 