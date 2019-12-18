#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 *
 * @head: single linked list
 * Return: 1 if is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp;
	int data[100];
	unsigned int i = 0, j = 0;

	if (*head == NULL)
		return (1);
	if ((*head)->next == NULL)
		return (1);
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	temp = *head;
	while (temp != NULL)
        {
		data[j] = temp->n;
                temp = temp->next;
		j++;
        }
	j = 0;
	while (j <= i)
	{
		if (data[j] != data[i])
			return (0);
		i--;
		j++;
	}
	return (1);
}
