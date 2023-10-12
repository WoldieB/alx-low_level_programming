#include "lists.h"
#include <stdio.h>

/**
 *  sum_dlistint - returns the sum of all
 * @head: double pointer to the head of the list
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *x;

	for (x = head; x != NULL; x = x->next)
	{
		sum += x->n;
	}

	return (sum);
}
