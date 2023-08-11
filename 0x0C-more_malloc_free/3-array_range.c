#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *block;
	int x, y = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (x = min; x <= max; x++)
		{
			block[y] = x;
			y++;
		}
		return (block);
	}
	else
		return (NULL);

}
