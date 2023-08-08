#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *cpy;
	int in, len;

	if (str == NULL)
		return (NULL);

	for (in = 0; str[in]; in++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (in = 0; str[in]; in++)
	{
		cpy[in] = str[in];
	}

	cpy[len] = '\0';

	return (cpy);

}
