/*  By using two-dimensional array, write C program to display a table of numbers as shown below: 

1	2	3	4	5	 
6	7	8 	9	10
11	12	13	14	15
16	17	18	19	20
21	22	23	24	25*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a[5][5];
	int i, j;
	int temp=1;
		
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++) 
		{
			a[i][j]=temp;
			printf("%d", a[i][j]); printf("\t"); temp=temp+1;
		}
		temp=temp;
		printf("\n");
		
	}
system("PAUSE");
return 0;
}