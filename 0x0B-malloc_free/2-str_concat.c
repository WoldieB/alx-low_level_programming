#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int in, concat_index = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (in = 0; s1[in] || s2[in]; in++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (in = 0; s1[in]; in++)
		concat_str[concat_index++] = s1[in];

	for (in = 0; s2[in]; in++)
		concat_str[concat_index++] = s2[in];

	return (concat_str);
}
