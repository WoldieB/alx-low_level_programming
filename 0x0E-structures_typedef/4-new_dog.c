#include "dog.h"

/**
 * _strlen - returns length of a string
 * @str: string to be counted
 * Return: returns length of string
*/

int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;
	return (len);
}

/**
 * _strcopy - copy string pointed by src into dest variable
 * @dest:buffer storing string copy
 * @src: buffer storing string to copy
 * Return:returns copied string
*/

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: returns NULL in case of failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	dog1->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}

	dog1->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}

	dog1->name = _strcopy(dog1->name, name);
	dog1->age = age;
	dog1->owner = _strcopy(dog1->owner, owner);
	return (dog1);
}
