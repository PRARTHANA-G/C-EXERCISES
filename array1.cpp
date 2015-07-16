//Write a program that will prompt the user to input ten integer values.
// The program will display the smallest and greatest of those values. 
//It also displays the value that occur the most.
# include <stdio.h>
#include<stdlib.h>

int main()

{
int arr[10];
int mode[10][2]; 
printf("Enter 10 integer numbers seperated by space:");
scanf("%d %d %d %d %d %d %d %d %d %d",&arr[0],&arr[1],&arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7],&arr[8],&arr[9]); 

//find the max value and min value 
 int i,j,temp; 
//sort array to find max and min values 
for(i=0;i<10;i++) 
   for(j=9;j>i;j--) 
     if(arr[j]<arr[j-1]) { 
          int temp=arr[j]; 
          arr[j]=arr[j-1]; 
		  arr[j-1]=temp; }

printf("\n"); 
printf("Max=%d,Min=%d",arr[9],arr[0]); 
printf("\n"); 

//find mode 
 for(i=0;i<10;i++) 
  for(j=0;j<10;j++) 
   if(arr[i]==arr[j+1]) {++mode[i][0];mode[i][1]=arr[i];} 
   
//find max occurence 
int max; 
int k=0; 
max=mode[0][0]; 
   for(j=0;j<10;j++) 
    if(max<mode[j][0]){max=mode[j][0];k=j;} 
    
//print result 
  printf("The most occuring item:%d",mode[k][1]);printf("\n"); 
  printf("It occurs %d",max); printf("times."); 
  printf("\n"); 
	
system("PAUSE");
return 0;
}