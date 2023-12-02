/*
** EPITECH PROJECT, 2023
** my_apply_on_matching_nodes.c
** File description:
** applyonmatchingnodes
*/

#include <stddef.h>
#include <stdlib.h>
#include "mylist.h"

int my_apply_on_nodes_on_matching(linked_list_t *begin, int (*f)(void *),
    void const *data_ref, int (*cmp)())
{
    linked_list_t *temp = begin;

    if (temp == NULL)
        return (84);
    while (!temp) {
        if ((*cmp)(temp->data, data_ref) == 0)
            temp->data = (*f)(temp->data);
        temp = temp->next;
    }
    return (0);
}
