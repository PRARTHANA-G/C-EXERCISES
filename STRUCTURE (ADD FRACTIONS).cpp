/*Write a C program to add two fractions and display the result fraction.

Your program will prompt the user to input fraction 1 and fraction 2. 
The numerator and denominator of each fraction are input separately by space. 
See the example output below:

  Enter fraction 1(numerator denominator): 1 2 
  Enter fraction 2(numerator denominator): 2 5 
  Result: 9/10  */

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
int n;
int d;
} fraction;

int main()
{
int n1, d1;
int n2, d2;

printf("Enter fraction 1 (numerator and denominator seperated by space):");
scanf("%d%d",&n1,&d1);
printf("Enter fraction 2 (numerator and denominator seperated by space):");
scanf("%d%d",&n2,&d2);

fraction f1={n1,d1};
fraction f2={n2,d2};
fraction r={f1.n*f2.d+f2.n*f1.d, f1.d*f2.d};

printf("Result=%d/%d", r.n, r.d); printf("\n");

system("PAUSE");
return 0;
}
