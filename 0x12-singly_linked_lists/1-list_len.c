#include "lists.h"

/**
  * list_len - Returns number of elements in a list
  * @h: Pointer to the head of the list
  *
  * Return: The number of nodes
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;


	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
