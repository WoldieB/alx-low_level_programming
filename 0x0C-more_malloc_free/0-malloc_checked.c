#include "main.h"

/**
 * malloc_checked - allocates memory using malloc,
 * @b: size of the memory block to be allocate
 * Return: pointer to the address
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
