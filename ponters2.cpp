/*Write a C program to accept five integer values from keyword.
The five values will be stored in an array using a pointer. 
Then print the elements of the array on the screen. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int arr[5];
int *p=arr;
int i;

printf("Enter five integer values seperated by space:");

for (i=0;i<5;i++){
	scanf("%d", &arr[i]);
	printf("\n"); 
	printf("%d", p[i]);
				}
printf("\n");

system("PAUSE");
return 0;
}