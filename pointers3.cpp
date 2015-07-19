/*
Write a C function to sort an array of ten integer values in ascending order.

The function will accept two arguments-- a pointer that points to the array and the array size. 
The function returns a pointer that points to the sorted array.
*/

#include<stdio.h>
#include<stdlib.h>

int *AscendingOrder(int *p,int size)
{
	int i,j;
	int temp;
	for (i=0;i<size;i++)
		for (j=i+1;j<size;j++)
			if(*(p+j)<*(p+i))
		{
			temp=*(p+j);
			*(p+j)=*(p+i);
			*(p+i)=temp;
		}
return p;
}
	

int main()
{
	int arr[]={10,98,-32,45,5,-7,-9,66,22, 99};
	int i;
	int *p=arr;
	int *ptr;
	ptr=AscendingOrder(p,10);
	for (i=0;i<10;i++)
	{
	printf("%d\n",*(ptr+i));
	}
	system("PAUSE");
	return 0;
}