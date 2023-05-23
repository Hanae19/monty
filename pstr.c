#include "monty.h"
/**
 * f_pstr - prints the string startiong at the top of the stack,
 * followwed by a new
 * @head: stack head
 * counter: line_number
 * Return: no return
 */
void f_pstr(stack_t **head, insigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		print("%c", h->n);
		h = h->next;
	}print("\n");
}
