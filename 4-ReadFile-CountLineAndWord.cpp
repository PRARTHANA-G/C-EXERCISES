
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count_lines(char *fp);
int count_word(char *filename, char *word);

int main()
{
	char filename[100];
	char word[50];

	printf("======================================\n");
	printf("COUNT LINES and WORDS in THE TEXT FILE\n");
	printf("======================================\n");

	do{
	printf("\nEnter the name of file you wish to COUNT: "); gets(filename);
	
	printf("\nThe number of lines in the file: %d\n", count_lines(filename));
	
	printf("\nEnter the WORD you wish to count: "); gets(word);
	printf("The NUMBER of WORD '%s' in the file : %d\n", word, count_word(filename, word));
	}while (true);

	system("pause");
	return 0;
}

int count_lines(char *filename)
{
	FILE *fp;
	fp= fopen(filename, "r");
	int ch=0;
	int lines=0;

	if (fp == NULL) return 0;
	else
	{
		 while ((ch = fgetc(fp)) != EOF)
		{
		  if (ch == '\n')
		lines++;
		}
		 fclose(fp);
		return lines;
	}
}

int count_word(char *filename, char *word)
{
	int countword=0;
	
	FILE *fp;
	fp= fopen(filename, "r");
	char string[255];

	if (fp == NULL) return 0;
	else
	{
		while(!feof(fp))
		{
			fscanf(fp,"%s",string);
			if(strcmp(string, word)==0)//if match found increment lines
			countword++;

		}
		 fclose(fp);
	}
	return countword;
}
