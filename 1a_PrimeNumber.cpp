#include <stdio.h>
#include <conio.h>

int is_prime(int n , int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (n % i == 0)
       {
         return 0;
       }
       else
       {
		   return is_prime(n, i-1);
       }       
    }
}

 
int main()
{
    int n, check;
	char confirm;

	do{
    printf("Enter a nber: ");
    scanf("%d", &n);
	check = is_prime(n, n/2);
	
    if (check == 1)
    {
        printf("%d is a prime nber\n", n);
    }
    else
    {
        printf("%d is not a prime nber\n", n);
    }
	printf("Press y or Y to continue:"); scanf("%s", &confirm);
	} while(confirm=='y'||confirm=='Y');
	getch();
    return 0;
}
 
