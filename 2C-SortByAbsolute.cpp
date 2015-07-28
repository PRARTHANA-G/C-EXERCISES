#include <stdio.h>
#include <conio.h>
#include <math.h>


double *Sort_Array(double *p, int n) 
{ 
	
	int temp;
	for (int i=0; i<n;i++)
	{
		double x=fabs(*(p+i));
		for (int j=i+1;j<n;j++)
		{
			double y=fabs(*(p+j));
			if (x>y) 
			{
			temp=*(p+j);
			*(p+j)=*(p+i);
			*(p+i)=temp;
			}
		}
	}
return p;
}


int main()
{
	int s,n;
	double a[100];
	double *p=a;
	double *ptr;

do{
printf("\nPlease Enter number of elements in array (n>=1): "); scanf("%d",&n);

for (int i=0; i<n;i++)
{
	printf("\n a[%d]= ", i); 
	scanf("%lf",&a[i]);
}

ptr=Sort_Array(p, n);

printf("\n After being sorted, the array looks like this:\n");
for (int i=0; i<n; i++) 
	{
		printf("\n a[%d] = %lf", i,*(ptr+i) );
	}

printf("\n");
} while (true);


getch();
return 0;
}
