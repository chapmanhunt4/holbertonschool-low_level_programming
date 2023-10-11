#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array being initialized
 * @n: the number of elements in array
 *
 * Return: return reverse
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int c = n - 1;

	for (i = 0; i < c;)
	{
		temp = a[i];
		a[i] = a[c];
		a[c] = temp;
		i++;
		c--;
	}
}
