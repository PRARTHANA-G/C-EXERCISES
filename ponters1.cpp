/*C pointer: find max exercise
Write a C program to find the max of an integral data set. 
The program will ask the user to input the number of data values in the set and each value. 
Then your program will show the max of the data set. See example below. 
Your C program will use a function that accepts the array of data values and its size. 
The return from the function is the pointer that points to the max value.

  Enter number of data values: 3
  Enter value 1: 21
  Enter value 2: 12
  Enter value 3: 4
  The max is 21. 
  Result: 2/9 
 */

#include <stdio.h>
#include <stdlib.h>

int *Max(int a[],int n)
{
int *max=a;
int i;
for(i=0;i<n;i++){
				if(*max<*(max+i)) *max=*(max+i);
				}

return max;
}


int main()
{
	int i, *ptr;
	int number;
	int arr[100];

	printf("Enter number of data values:"); scanf("%d",&number);
	printf("\n");
	
	for (i=0;i<number;i++){
		printf("Enter value %d:", i+1); scanf("%d", &arr[i]); 
		printf("\n"); 	}

	// point ptr to function of Max
	ptr=Max(arr,number);

	printf("The max is: %d\n", *ptr);	

	system("PAUSE");
	return 0;
}
