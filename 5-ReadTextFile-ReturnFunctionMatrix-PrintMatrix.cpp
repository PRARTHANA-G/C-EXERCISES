
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

struct Matrix
{
int row_num;
int col_num;
int **values;
} ;

void print_matrix(char *filename);
Matrix *read_matrix(char *filename);

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

Matrix *read_matrix(char *filename)
{
	FILE *fp;
	char *ptr;
	char row[5]; long int m;
	char col[5]; long int n;
	int **A;


	char ch=0;

	char temp[100]; long int num;
	int a[1000];

	int i=0,j, p=0;
	
	fp=fopen(filename,"r");
	fscanf(fp, "%s", row); m=strtol(row, &ptr, 10);
	fscanf(fp, "%s", col); n=strtol(col, &ptr, 10);
	
	A = (int**)calloc(m, sizeof(int*));
	 for (int i = 0; i < m; i++)
	  {
      A[i] = (int*)calloc(n, sizeof(int));
      }

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
	
	for (i=0; i< m; i++)
		for (j=0; j<n; j++)
		{
		A[i][j]=a[p];p++;
		}
			
	fclose(fp);
	
	Matrix *M=(Matrix*) malloc(n*sizeof(int));;
	

    M->row_num = m;
    M->col_num = n;
	M->values = A;
		return M;
}

void print_matrix(char *filename)
{
	
	Matrix *ptr;
	ptr=read_matrix(filename);

	long int m=ptr->row_num;
	long int n=ptr->col_num;
	int **M=ptr->values;
	
	printf("\n"); 
	for (int i=0; i< m; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("%d\t", M[i][j]); 
		}
		printf("\n");
	}
}
