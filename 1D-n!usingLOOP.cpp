#include <stdio.h>
#include <conio.h>
#include <math.h>

long long compute_factorial_iterative(int n) 
{ 
	long r=1;
	for (int i=1;i<=n;i++) r=r*i;
return r;
}

int main()
{
	int n;
	long long r;

do{
printf("Please input an integer valune n>=1: "); scanf("%d",&n);
r=compute_factorial_iterative(n);
printf("The factorial of the number is: %d", r);
printf("\n");
}while (true);

getch();
return 0;
}