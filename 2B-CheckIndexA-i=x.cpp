#include <stdio.h>
#include <conio.h>
#include <math.h>


int find_element(double *p, double x, int n) 
{ 
	
	int s=0;
	for (int i=0; i<n;i++)
	{
		if (*(p+i)==x) { s=i+1; break;}
	}
	return s;
}


int main()
{
	int s,n;
	double a[100];
	double *p=a;
	double x;

do{
printf("\nPlease Enter number of elements in array (n>=1): "); scanf("%d",&n);

for (int i=0; i<n;i++)
{
	printf("\n a[%d]= ", i); 
	scanf("%lf",&a[i]);
}

printf("Enter number X = "); scanf("%lf", &x);

s=find_element(p, x, n) ;
if (s!=0) printf("\nThere is an index i such that a[i] = X: i = %d", s-1);
else printf("\nNo index i such that a[i] = X");
printf("\n");
} while (true);


getch();
return 0;
}