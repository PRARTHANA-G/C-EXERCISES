// Write a program to sort 10 integer values (reading from keyboard) in ascending and descending order.

#include<stdio.h>
#include<stdlib.h>

int arr[10],swap,jumlah;

void asc(int x)
{ 
int y,min;
for(x=0;x<9;x++)
{
min=x;

for(y= x+1; y<10; y++)
{if(arr[min]>arr[y])
min=y;
}
if(min != x)
{swap=arr[x];
arr[x]=arr[min];
arr[min]=swap;
}
}
}

void des(int a)
{ 
int b,max;
for(a=0;a<9;a++)
{
max=a;

for(b= a+1; b<10; b++)
{if(arr[max]<arr[b])
max=b;
}
if(max != a)
{swap=arr[a];
arr[a]=arr[max];
arr[max]=swap;
}
}
}



int main ()
{	
int a;
printf("input 10 data\n\n");

for(jumlah = 0 ; jumlah<10 ; jumlah++)
{printf("data %d = ",jumlah+1);scanf("%d",&arr[jumlah]);
}

asc(arr[jumlah]);


printf("\nSorted list in ascending order : \n");
for(jumlah=0;jumlah<10;jumlah++)
printf("%d\n", arr[jumlah]);

des(arr[jumlah]);
printf("\nSorted list in descending order : \n");
for(jumlah=0;jumlah<10;jumlah++)
printf("%d\n", arr[jumlah]);

system("PAUSE");
return 0;
}

