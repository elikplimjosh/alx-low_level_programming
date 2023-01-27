#include "lists.h"

/**
  * free_list - Frees the whole linked list
  * @head: Address of the list
  *
  */


void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
} /*code by : joshua ryan akakpo*/
