/*The program will display a menu that enables the user to choose whether they want to view
all students ’records or view only the records of a specific student by the student’s id. 
See sample below.
===============================================================================
					         MENU
===============================================================================
          
		  1. View all students’ records
          2. View a student’s records by ID 
          3. Show the highest and the lowest final scores 

Please enter your choice:1 
============================================== 
|StudentID | Quiz1 | Quiz2 | Mid-Term | Final | 
============================================== 
|1232      |  10   | 23    | 45       | 56    |     
|2343      |  45   | 43    | 24       | 78    | 
|2345      |  34   | 45    | 45       | 45    | 
|3423      |  67   | 6     | 65       | 56    | 

Note: These records will be stored in a two-dimensional array  */

#include <stdio.h> 
#include <stdlib.h> 

int hivalue(int stu[4][5])
{ 
    int max,i; 
    max=stu[0][4]; 
    for(i=0;i<4;i++) 
      if(max<stu[i][4]) max=stu[i][4]; 
    return (max); 
    
}

int lovalue(int stu[4][5]){ 
    int min,i; 
    min=stu[0][4]; 
    for(i=0;i<4;i++) 
      if(min>stu[i][4]) min=stu[i][4]; 
    return (min); 
    
} 
void displaymenu(){ 
printf("====================================================\n"); 
printf("                         MENU                                  \n"); 
printf("=====================================================\n"); 
printf("     1.View all student records\n"); 
printf("     2.View a student records by ID\n"); 
printf("     3.Show the highest and the lowest scores\n"); 
  
     } 
void showheading(){ 
printf("==========================================================================\n"); 
printf("StudentID  ||   Quiz1   ||     Quiz2    ||    Mid-term     ||    Final\n"); 
printf("==========================================================================\n"); 
     } 

void viewall(int stu[4][5]){ 
 int i,j; 
//display heading 
showheading(); 
 for(i=0;i<4;i++){ 
	 for(j=0;j<5;j++) {printf("%d",stu[i][j]);printf("\t\t\t\t");};
   printf("\n"); 
     } 
}

void viewbyid(int stu[4][5])
{ 
     int id,i,j; 
	 int l=0;
 
     printf("Please enter a student's ID:"); 
     scanf("%d",&id); 
     for(i=0;i<4;i++)
	 { 
       if(stu[i][0]==id)
	   { 
          showheading(); 
		  l=1;
		  for(j=0;j<5;j++) {printf("%d",stu[i][j]);printf("\t\t\t\t");} 
	   }
	    printf("\n");
	    if(l==0) printf("Not found!\n"); 
	 }
	
	
} 

void showhl(int stu[4][5])
{ 
     printf("The higest final score is:%d", hivalue(stu) ); 
     printf("\n"); 
     printf("The lowest final score is:%d", lovalue(stu) ); 
     printf("\n"); 
     
} 


     
int main() 
{ 
	//construct 2d array to store students'records 
int stu[4][5]={{1232,10,23,45,56},{2343,45,43,24,78},{2345,34,45,45,45},{3423,67,6,65,56}}; 
  
//show menu 
  
  int yourchoice; 
  char confirm; 

  displaymenu();
  do 
  { 
    printf("Enter your choice(1-3):"); 
    scanf("%d",&yourchoice); 
  
    switch(yourchoice){ 
        case 1:viewall(stu);break; 
        case 2:viewbyid(stu);break; 
        case 3:showhl(stu);break; 
        default:printf("invalid"); 
                   } 
                   
      printf("Press y or Y to continue:"); 
      scanf("%s", &confirm); 
    }while(confirm=='y'||confirm=='Y'); 
  
  system("PAUSE"); 
  return 0; 
} 