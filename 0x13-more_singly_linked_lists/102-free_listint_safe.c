#include "lists.h"

/**
 * free_listint_safe - Frees a linked list and sets the head to NULL.
 * @h: A pointer to the pointer to the first node in the linked list.
 *
 * This function frees a linked list safely to avoid infinite loops
 * in the case of a looped list. It sets the head pointer to NULL
 * after freeing the nodes.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}

		else
		{
			free(*h);
			*h = NULL;
				len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
