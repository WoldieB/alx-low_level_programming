#include "main.h"

/**
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, len1, len2;

	len1 = 0;
	len2 = 0;

	while (*dest != '\0')
	{
		len1++;
	}

	while (*str != '\0')
	{
		len2++;
	}
	i = len1 + len2;
	int x;

	for (x = len1; x < i; x++)
	{
		for (j = 0; j < len2; j++)
		{
			*dest[x] = *src[j];
		}
	}

	return (*dest);
}
