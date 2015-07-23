/*
Student Record

Write a C program to keep records and perform statistical analysis for a class of 20 students.
The information of each student contains ID, Name, Sex, quizzes Scores (2 quizzes per semester), 
mid-term score, final score, and total score. 
The program will prompt the user to choose the operation of records from a menu as shown below: 
============================================ 
                    Menu
============================================
1. Add student records

2. Delete student records

3. Update student records

4. View all student records

5. Calculate an average of a selected student’s scores

6. Show student who gets the max total score

7. Show student who gets the min total score

8. Find student by ID

9. Sort records by total scores


Enter your choice:1 
  
Note: All students records store in an array of structures
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

//declaring student structure

typedef struct
{
char stID[10];
char stname[10];
char sex;

float quizz1;
float quizz2;
float assignment;
float midterm;
float final;

float total;

} student;

void Addstu(student st[], int *stcount );
int search(student st[], char id[], int stcount);
void deletest(student st[], int *stcount );
void clear(student st[], int index);
void updatest(student st[], int stcount);
void SortByTotal(student st[], int n);
void viewall(student st[], int stcount);
void displayheading();

void displayMenu()
{
	printf("============================================ \n");
	printf("                      Menu                   \n");
	printf("============================================ \n");
	printf("1. Add student records\n\n");
	printf("2. Delete student records\n\n");
	printf("3. Update student records\n\n");
	printf("4. View all student records\n\n");
	printf("5. Calculate an average of a selected student’s scores\n\n");
	printf("6. Show student who gets the max total score\n\n");
	printf("7. Show student who gets the min total score\n\n");
	printf("8. Find student by ID\n\n");
	printf("9. Sort records by total scores\n\n");	
}

void Addstu(student st[], int *stcount )
{
 again:
	printf("Enter student's ID:"); scanf("%s",&st[*stcount].stID);
	if (search(st,st[*stcount].stID,*stcount)!=-1)
	 {
		 printf("The ID already exists\n"); goto again;
	 }
 printf("Enter student's name:"); scanf("%s", &st[*stcount].stname); 
 printf("Enter student's Sex(F or M):"); scanf("%s", &st[*stcount].sex);
 printf("Enter student's quizz1 score:"); scanf("%f", &st[*stcount].quizz1);
 printf("Enter student's quizz2 score:"); scanf("%f", &st[*stcount].quizz2);
 printf("Enter student's assignment score:"); scanf("%f", &st[*stcount].assignment);
 printf("Enter student's midterm score:"); scanf("%f", &st[*stcount].midterm);
 printf("Enter student's final score;"); scanf("%f", &st[*stcount].final);

 st[*stcount].total=st[*stcount].quizz1+st[*stcount].quizz2+st[*stcount].assignment+st[*stcount].midterm+st[*stcount].final;

 (*stcount)++;
}

int search(student st[], char id[], int stcount)
{ 
	int found=-1, i;
	for(i=0; i< stcount && found==-1; i++ )
	{
		if(strcmp(st[i].stID, id)==0) found=i;
		else found=-1;
	}
	return found;
}

void deletest(student st[], int *stcount )
{
	char id[10];
	int index, i;
	if (*stcount>0)
	 {
		printf("Enter student's ID:"); scanf("%s", &id);
		index=search(st, id, *stcount);
		
		if (index!=-1 && *stcount!=0)
		 {
			 if (index==*stcount-1) //delete the last record
			 {
			 clear(st, index); *stcount--;
			 printf("The record of that student was delete.\n");
			 }
			 else 
				{
					for(i=index;i<*stcount-1;i++) //delete the first or midle record
					{
					st[i]=st[i+1];
					clear(st, *stcount);
					(*stcount)--;
					}
			    }
		 }
		else printf("The record does not exist. Check the ID and try again.\n");
	 }
	else printf("No record to delete\n");
}

void clear(student st[], int index)
{
strcpy(st[index].stID,"");
strcpy(st[index].stname,"");
st[index].sex =NULL;
st[index].quizz1 = 0;
st[index].quizz2 = 0;
st[index].assignment = 0;
st[index].midterm = 0;
st[index].final = 0;
st[index].total = 0;
}

void updatest(student st[], int stcount) //stcount for search function
{
char id[10];
int column_index;
printf("Enter student's ID:");
scanf("%s",&id);
printf("Which field you want to update(1-7)?:");
scanf("%d",&column_index);

int index = search(st, id, stcount);

if (index != -1)
{
	if (column_index == 1)
	{
	printf("Enter student's Name:");

	scanf("%s",&st[index].stname);
	}

	else if (column_index == 2)
	{
	printf("Enter student's Sex(F or M):");
	scanf("%c",&st[index].sex);
	}
	else if (column_index == 3)
	{
	printf("Enter student's quizz1 score:");
	scanf("%f",st[index].quizz1);
	}
	else if (column_index == 4)
	{
	printf("Enter student's quizz2 score:");
	scanf("%f",st[index].quizz2);
	}
	else if (column_index == 5)
	{
	printf("Enter student's assignment score:");
	scanf("%f",st[index].assignment);
	}
	else if (column_index == 6)
	{
	printf("Enter student's mid term score:");
	scanf("%f",&st[index].midterm);
	}
	else if (column_index == 7)
	{
	printf("Enter student's final score:");
	scanf("%f",&st[index].final);
	}
	else printf("Invalid column index");

st[index].total = st[index].quizz1 + st[index].quizz2 + st[index].assignment
 + st[index].midterm + st[index].final;

}
else printf("The record deosn't exits.Check the ID and try again.");
}

// function to view all student scores
void viewall(student st[], int stcount) 
{
	int i=0;
	displayheading();
	while (i<stcount)
	{
		if(st[i].stID!="")
		{
			printf("%-5s",st[i].stID);
			printf("%-17s",st[i].stname);
			printf("%-5c",st[i].sex);
			printf("%-6.1f",st[i].quizz1);
			printf("%-6.1f",st[i].quizz2);
			printf("%-6.1f",st[i].assignment);
			printf("%-6.1f",st[i].midterm);
			printf("%-7.1f",st[i].final);
			printf("%-4.1f",st[i].total);
			printf("\n");
		}
		i=i+1;
	}
	if (stcount==0) printf("Record is empty!\n");
}


//function to calculate the average score of a student
void average(student st[], int stcount)
{
char id[10];
float avg=0;

printf("Enter students'ID:");
scanf("%s",&id);

int index = search(st, id,stcount);

if (index != -1 && stcount>0)
{
st[index].total = st[index].quizz1 + st[index].quizz2 + st[index].assignment + st[index].midterm + st[index].final;
avg = st[index].total/5;
printf("The average score is: %f",avg);
printf("\n");
}
else printf("The student's ID does not exist! Please try again!\n");
}

//function to show max total score 
void showmax(student st[], int stcount)
{
float max = st[0].total;
int index=0,j;

if (stcount >= 2)
{

  for (j = 0; j < stcount-1; ++j)
	if (max < st[j+1].total)
	{
	max = st[j+1].total;
	index = j+1;
	}

printf("The student with ID %s gets the highest score is: %f",st[index].stID,max);
printf("\n");

}

else if (stcount == 1)
{
index = 0;
max = st[0].total;
printf("The student with ID %s gets the highest score is: %f",st[index].stID,max);
printf("\n");
}

else printf("No record found!\n");

}

//function to show min total score
void showmin(student st[], int stcount)
{
float min = st[0].total;
int index=0,j;

if (stcount >= 2)
{

  for (j = 0; j < stcount-1; ++j)
	if (min > st[j+1].total)
	{
	min = st[j+1].total;
	index = j+1;
	}
	
printf("The student with ID %s gets the min total score is: %f",st[index].stID,min);
printf("\n");
	
}

else if (stcount == 1)
{
index = 0;
min = st[0].total;
printf("The student with ID %s gets the min toal score IS: %f",st[index].stID,min);
printf("\n");
}

else printf("No record found!\n");

}

//function to find record
void find(student st[], int stcount)
{
char id[10];
printf("Enter student's ID:");
scanf("%s",&id);

int index=search(st,id, stcount);
if (index != -1) 
{ //display the found record
displayheading();
printf("%-5s",st[index].stID);
printf("%-17s",st[index].stname);
printf("%-5c",st[index].sex);
printf("%-6.1f",st[index].quizz1);
printf("%-6.1f",st[index].quizz2);
printf("%-6.1f",st[index].assignment);
printf("%-6.1f",st[index].midterm);
printf("%-7.1f",st[index]. final);
printf("%-4.1f",st[index].total);
printf("\n");

}
else printf("The record doesn't exits.\n");

}


//function to sort records by total score
void SortByTotal(student st[], int n)
{
int i, j;
for (i = 0; i < n; i++)
	for (j = n - 1; j > i; j--)
		if (st[j].total < st[j - 1].total )
		{
		student temp = st[j];
		st[j] = st[j - 1];
		st[j - 1] = temp;
		}
}


void displayheading()
{
printf("ID   NAME            SEX    Q1    Q2    ASS    MI   FI    TOTAL  \n   ");
printf("=================================================================\n");
}


void main()
{
	student st[20];
	int stcount=0;

	displayMenu();
	int opt;
	char confirm;
	
	do
	{
		printf("Enter your choice(1-9):"); scanf("%d", &opt);
		switch(opt)
		{
			case 1: Addstu(st, &stcount); break;
			case 2: deletest(st, &stcount); break;
			case 3: updatest(st, stcount); break;
			case 4: viewall(st, stcount); break;
			case 5:average(st, stcount);break;
			case 6:showmax(st, stcount);break;
			case 7:showmin(st, stcount);break;
			case 8:find(st, stcount);break;
			case 9:SortByTotal(st, stcount);break;
			default: printf("Invalid\n");
		}
		printf("Press y or Y to continue:"); 
		scanf("%s", &confirm); 
	} while (confirm == 'y' ||confirm=='Y');

	if (confirm!='y' && 'Y') printf("SEE YOU!\n");
	
	getch();
}