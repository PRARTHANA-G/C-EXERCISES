#include <stdio.h>
#include <math.h>
#include<stdlib.h> // malloc

struct IndexPair
{
int index1;
int index2;
};

IndexPair *find_pair_with_largest_sum(double *p, int n)
{
IndexPair *index_pair = (IndexPair*)malloc(sizeof(IndexPair)); // allocate one element

if (n < 2) {
return 0;
}

double s = *p + *(p + 1);
index_pair->index1 = 0;
index_pair->index2 = 1;

for (int i = 0; i<n; i++) 
for (int j = i + 1; j<n; j++) {
double temp = *(p + i) + *(p + j);
if (temp>s) {
index_pair->index1 = i;
index_pair->index2 = j;
s = temp;
}
}
return index_pair;
}

int main()
{
int n;
double a[100];

printf("\nPlease Enter number of elements in array (n>=1): "); 
scanf_s("%d", &n);

for (int i = 0; i<n; i++)
{
printf("\n a[%d]= ", i);
scanf_s("%lf", &a[i]);
}

IndexPair *ptr = find_pair_with_largest_sum(a, n);

if (ptr == NULL) {
printf("n is less than 2, so there is no pair of indices i and j\n");
system("PAUSE");
return 0;
}


printf("\nA pair of two distinct indices 0=< i< j <=n such that a[i] + a[j] is the largest: i = %d, j= %d\n", ptr->index1, ptr->index2);
system("PAUSE");
return 0;
}
