/*
** EPITECH PROJECT, 2023
** my_find_node.c
** File description:
** findnode
*/

#include <stddef.h>
#include <stdlib.h>
#include "mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin,
    void const *data_ref, int (*cmp)())
{
    linked_list_t *temp = begin;
    int len = my_list_size(*begin);

    if (temp == NULL)
        return (NULL);
    for (int i = 0; i < len; i++) {
        if ((*cmp)(temp->data, data_ref) == 0)
            return (temp);
        temp = temp->next;
    }
    return (NULL);
}
