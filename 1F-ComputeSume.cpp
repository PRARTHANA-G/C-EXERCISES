#include <stdio.h>
#include <conio.h>
#include <math.h>

//#define _USE_MATH_DEFINES

double compute_sum(int n) 
{ 
	double s=0;
	double p;
	int i;
	int k=4*n+1;
	for (i=0;i<=k; i++) 
	{		
		p=pow(-1, (double)i)/(2*i+1);
		s=s+p;
	}
return s;
}

int main()
{
	int n;
double s;

do{
printf("\nPlease input an integer valune n (n>=0): "); scanf("%d",&n);
s=compute_sum(n) ;
printf("The sum S = 1 - 1/3 + 1/5 - 1/7 + ... - 1/(4n+3) is: %20.17f", s);
printf("\nLet verify PI number with 4*S:  %20.17f", 4*s);

printf("\n");
}while (true);

getch();
return 0;
}