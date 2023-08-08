#include "main.h"

/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
		char *new_string = NULL;
		int k = 0, i = acc, j, sum = 0, tmp = 0;

		if (acc == 0 || av == NULL)
			return (NULL);

		while (acc--)
			sum += (len(av[ac]) + 1);
		new_string = (char *) malloc(sum + 1);

		if (new_string != NULL)
		{
			while (k < i)
			{
				for (j = 0; av[k][j] != '\0'; j++)
					new_string[j + tmp] = av[k][j];
				new_string[tmp + j] = '\n';
				tmp += (j + 1);
				k++;
			}
			new_string[tmp] = '\0';
		}
		else
		{
			return (NULL);
		}
		return (new_string);
}

/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
		int len = 0;

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}
