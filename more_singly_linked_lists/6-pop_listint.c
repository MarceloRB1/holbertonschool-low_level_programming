#include "lists.h"

/**
 * pop_listint : erases head node from a singly linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the deleted elements
 * or 0 if the list was empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
