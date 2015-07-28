#include <stdio.h>
#include <conio.h>
#include <math.h>


int is_square(float m)
{
	float s;
	s= sqrt(m);
	int sq;
	sq=floor(s);
	int is;
	if (s == sq) is=1;
	else is=0;	
	return is;
}

int main()
{
	float n;
	int c;

do{
printf("Please input an integer valune n>=1: "); scanf("%f",&n);
c=is_square(n);
if (c==1) printf("The number is SQUARE!");
else if (c==0) printf("The number is NOT square!");
printf("\n");
}while (true);

getch();
return 0;
}