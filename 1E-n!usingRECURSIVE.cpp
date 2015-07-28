#include <stdio.h>
#include <conio.h>
#include <math.h>

long long compute_factorial_recursive(int n) 
{ 

	if (n==1||n==0) return 1;
	else return n*compute_factorial_recursive(n-1);
}

int main()
{
	int n;
	long long r;

do{
printf("Please input an integer valune n>=0: "); scanf("%d",&n);
r=compute_factorial_recursive(n);
printf("The factorial of the number is: %d", r);
printf("\n");
}while (true);

getch();
return 0;
}