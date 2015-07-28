#include <stdio.h>
#include <conio.h>
#include <math.h>


double compute_sum(double a[], int n) 
{ double s=0;
double p,q,x,y;
	for (int i=0; i<n;i++)
	{
		x=pow(-1,(double)i);
		q=a[i];
		y=pow(q,2);
		p=x*y;
		s=s+p;
	}
	return s;
}


int main()
{
	int n;
	double a[100];
	double s;

do{
printf("\nPlease Enter number of elements in array (n>=1): "); scanf("%d",&n);

for (int i=0; i<n;i++)
{
	printf("\n a[%d]= ", i); 
	scanf("%lf",&a[i]);
}

s=compute_sum(a,n) ;

printf("\nThe sum of the array is: %lf", s);
printf("\n");
} while (true);


getch();
return 0;
}