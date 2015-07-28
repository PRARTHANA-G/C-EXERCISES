#include <stdio.h>
#include <conio.h>

int count_divisors(int m)
{
	int count=1;
	for (int i=2; i<=m; i++)
	{
	if ((m%i)==0) count++;
	}
	return count;
}

int main()
{
	int n;
	int c;

do{
printf("Please input an integer valune n>=1: "); scanf("%d",&n);
c=count_divisors(n);
printf("The number of divisors that n has: %d", c);
printf("\n");
}while (true);

getch();
return 0;
}