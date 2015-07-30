#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student
{
	char name[30];
	char id[30];
	int age;
};

void displayheading(); void view_list();
int search(Student student_list[], char id[], int n);
void sort_by_name();
void sort_by_age();

void displayheading()
{
	printf("---------------------------------------------------\n");
	printf("|        NAME            |     ID      |    AGE   | \n");
	printf("---------------------------------------------------\n");
}

void view_list(Student student_list[], int n)
{
	int i=0;
	displayheading();
	if (n==0) printf("The Student List is empty!\n ");
	while(i<n)
	{
		if(student_list[i].id!="")
			{
				printf("%-27s", student_list[i].name);
				printf("%-15s", student_list[i].id);
				printf("%-5d", student_list[i].age);
				printf("\n");
			}
		i++;
	} 
}


void AddStudent(Student student_list[], int *n)
{
again:
	printf("Enter student's ID:"); scanf("%s", &student_list[*n].id);fflush(stdin);//or getc(stdin) for gets() - next
	if (search(student_list, student_list[*n].id, *n)!=-1)
		{
			printf("The ID already exists\n"); goto again;
		}
	printf("Enter student's name:");
	gets(student_list[*n].name); //not use scanf("%s", &student_list[*n].name);
	printf("Enter student's age:");scanf("%d", &student_list[*n].age);

(*n)++;
}

int search(Student student_list[], char id[], int n)
{
	int found=-1;
	for (int i=0; i<n && found==-1; i++)
	{
		if (strcmp(student_list[i].id, id)==0) found = i;
		else found=-1;
	}
return found;
}

void print_student_list_by_name(Student *student_list, int n)
{
	int i, j;
	for(i=0; i<n; i++)
		for (j=i+1; j<n; j++)
		{		
			if(strcmp((student_list+i)->name, (student_list+j)->name)>0) 
			{
			Student temp = *(student_list+j);
			*(student_list+j)= *(student_list+i);
			*(student_list+i)=temp;
			}
		}
	view_list(student_list, n);
}


void print_student_list_by_age(Student *student_list, int n)
{
	int i, j;
	for(i=0; i<n; i++)
		for (j=i+1; j<n; j++)
		{		
			if((student_list+i)->age < (student_list+j)->age) //or student_list[i].age<student_list[j].age
			{
			Student temp = *(student_list+j);
			*(student_list+j)= *(student_list+i);
			*(student_list+i)=temp;
			}
		}

	view_list(student_list, n);
}


int main()
{
	char confirm;
	int opt;
	Student student_list[20];
	
	int n=0;
	
	printf("-----------------------------------------------------\n");
	printf("                     STUDENT LIST                   \n");
	printf("-----------------------------------------------------\n");
	printf("1. Input information for n students\n");
	printf("2. Print the list of the students by the alphabetic order of their names\n");
	printf("3. Print the list of the students by their ages\n\n");

do

{
	printf("Enter your choice (1-3): "); 
	scanf("%d", &opt);

	switch (opt)
	{
	case 1: AddStudent(student_list, &n); break;
	case 2: print_student_list_by_name(student_list, n); break;
	case 3: print_student_list_by_age(student_list, n); break;
	default: printf("Invalid!\n");
	}

printf("Press y to continue:"); scanf("%s", &confirm);
}while(confirm=='y');

system("PAUSE");
return 0;
}