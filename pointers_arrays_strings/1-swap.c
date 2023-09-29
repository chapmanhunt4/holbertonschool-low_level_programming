#include "main.h"

/**
 * swap_int - swaps the  value of two integers
 *
 * @a: pointer of the integer being swapped with b
 * @b: pointer of the integer being swapped with a
 **/

void swap_int(int *a, int *b)

{
	int c = *a;

	*a = *b;
	*b = c;
}
