#include "main.h"
/**
 *  _strchr - function that locates a character in a string
 *  @s: first value -char
 *  @c: second value - cha
 *   Return: char with result
 */
char *_strchr(char *s, char c)
{

                if (*s == '\0')
                        return (s);

                while (*s)
                {
                        if (*s == c)
                        {
                                return (s);
			}
		}
}

