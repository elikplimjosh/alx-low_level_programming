#include "lists.h"

/**
  * print_list - Prints all the elements of a linked list
  * @h: Pointer to the head of the list
  *
  * Return: The number of nodes
  */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}
	return (count);
}
