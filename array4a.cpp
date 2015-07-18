#include<stdio.h> 
#include<conio.h> 
  
   int main() 
    { 
     
     int matrix[5][5]; 
     int i,j; 
     for(i=0;i<5;i++) //assign values to the matrix

        for(j=0;j<5;j++){ //

           if(i==j) matrix[i][j]=0;if row=column=> fill the matrix with 0 
           else if(i>j) matrix[i][j]=-1;//if row>columns=> fill matrix with -1
           else matrix[i][j]=1; //if row<columns=> fill matrix with 1 
             }     
            
     for(i=0;i<5;i++){ //print the array 
        for(j=0;j<5;j++) 
            printf("%d\t",matrix[i][j]); 
       printf("\n");   
       } 
     getch(); 
     return 0; 
  
    } 
    