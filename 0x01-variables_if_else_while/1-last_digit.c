#include <stlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints randomly generated number 
 * Return: Awlays 0
 */
int main(void)
{
	int n;
	int a;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2
	a = n % 10;
	
	if (a > 5)
	{
		printf(" the last digit of %d is %d and it is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf(" the last digit of %d is %d and it is 0\n", n, a);
	}
	else
	{
		printf(" the last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
