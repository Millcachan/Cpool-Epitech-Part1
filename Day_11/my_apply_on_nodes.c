/*
** EPITECH PROJECT, 2023
** my_apply_on_nodes.c
** File description:
** applyonnodes
*/

#include <stddef.h>
#include <stdlib.h>
#include "mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *temp = begin;

    while (!temp) {
        temp->data = (*f)(temp->data);
        temp = temp->next;
    }
    return (0);
}
