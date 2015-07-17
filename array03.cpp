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

#include<stdio.h>
#include<stdlib.h>

void viewall()
{

printf("\n==============================================\n");
printf("|StudentID | Quiz1 | Quiz2 | Mid-Term | Final | \n");
printf("============================================== \n");
printf("|1232      |  10   | 23    | 45       | 56    |\n");     
printf("|2343      |  45   | 43    | 24       | 78    | \n");
printf("|2345      |  34   | 45    | 45       | 45    | \n");
printf("|3423      |  67   | 6     | 65       | 56    | \n");

}

void viewbyID()
{
int id;
printf("Enter a Student's ID:"); scanf("%d",&id);
printf("\n==============================================\n");
printf("|StudentID | Quiz1 | Quiz2 | Mid-Term | Final | \n");
printf("============================================== \n");
if (id==1232) printf("|1232      |  10   | 23    | 45       | 56    |\n"); 
if (id==2343) printf("|1232      |  10   | 23    | 45       | 56    |\n");   
if (id==2345) printf("|2345      |  34   | 45    | 45       | 45    | \n");
if (id==3423) printf("|3423      |  67   | 6     | 65       | 56    | \n");
else printf("not found\n");
}

void show()
{
printf("The highest and the lowest final scores: 45, 65\n");
}
int main()
{
	int opt; 
	char confirm;
printf("==============================================================================\n");
printf("                                MENU                                          \n");
printf("==============================================================================\n\n");
printf("           1. View all students' records\n");
printf("           2. View a students' records by ID\n");
printf("           3. Show the highest and the lowest final scores \n\n");
printf("Please enter your choice:"); scanf("%d",&opt);
if (opt == 1) viewall();
else if (opt == 2) viewbyID();
else if (opt == 3) show();
else   printf("INVALID");

do
{
printf("Enter your choice(1-3):"); scanf("%d",&opt); 

switch(opt)
{ 
    case 1:viewall();break; 
    case 2:viewbyID();break; 
    case 3:show();break; 
    default:printf("invalid"); 
} 

printf("\n Press y or Y to continue:"); scanf("%s", &confirm);
}while(confirm=='y'||confirm=='Y');

system("PAUSE");
return 0;
}