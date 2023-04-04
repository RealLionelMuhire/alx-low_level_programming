#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head, *fast = head;
    size_t count = 0;

    while (fast && fast->next)
    {
        /* Move the slow pointer by one node */
        slow = slow->next;

        /* Move the fast pointer by two nodes */
        fast = fast->next->next;

        /* If the fast pointer catches up with the slow pointer,
           there is a loop in the list */
        if (slow == fast)
        {
            printf("Loop detected, printing until loop:\n");
            while (head != fast)
            {
                printf("[%p] %d\n", (void *)head, head->n);
                head = head->next;
                count++;
            }
            printf("[%p] %d\n", (void *)head, head->n);
            exit(98);
        }
    }

    /* No loop detected, print the entire list */
    while (head)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
        count++;
    }

    return (count);
}

