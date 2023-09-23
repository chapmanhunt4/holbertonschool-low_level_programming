#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * specifies return point
 * Return: 0
 **/
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		int l = n % 10;

		{
		if (n > 5)
		{
			printf("Last digit of %d and is greater than 5\n", l);
		}
		else if (n == 0)
		{
			printf("Last digit of %d and is 0\n", l);
		}
		else
		{
			printf("Last digit of %d and is less than 6 and not 0\n", l);
		}
}
return (0);
}
