
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>


void print_matrix(char *filename);

int main()
{
	char filename[100];

    printf("==================================================\n");
	printf("READ INFORMATION FROM A FILEP and PRINT THE MATRIX\n");
	printf("==================================================\n");
	
	do{
	printf("\nEnter the NAME of FILE you wish to COUNT: "); gets(filename);
	printf("\nTHE MATRIX NEED TO PRINT:\n");
	print_matrix(filename);

	}while (true);

system("pause");
return 0;
}

void print_matrix(char *filename)
{
	FILE *fp;
	char *ptr;
	char row[5]; long int r;
	char col[5]; long int c;

	char ch=0;

	char temp[100]; long int num;
	int a[1000];

	int i=0,j;
	
	fp=fopen(filename,"r");
	fscanf(fp, "%s", row); r=strtol(row, &ptr, 10);
	fscanf(fp, "%s", col); c=strtol(col, &ptr, 10);
	long int k=r*c;int u=c-1;


	do
	{fscanf(fp, "%s", temp);
	if(strcmp(temp, "")!=0)
		{
			ch=fgetc(fp);
		num=strtol(temp, &ptr, 10);
		a[i]=num; 
		i++;
		}
	} while(ch!='\n');
	
	printf("\n");
	for (i=0;i<k;i++)
	{
	
		printf("%ld\t ", a[i]); 
		if (i==u)
			{ printf("\n");
		u=u+c;
			}
	
	}
	printf("\n");
	
	fclose(fp);
}
