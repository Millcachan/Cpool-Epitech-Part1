/*
** EPITECH PROJECT, 2023
** my_delete_codes.c
** File description:
** deletesnodes
*/

#include <stddef.h>
#include <stdlib.h>
#include "mylist.h"
#include "my.h"


int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *temp = *begin;
    linked_list_t *tmp = 0;

    if (!temp)
        return (84);
    while (temp->next) {
        if (!((*cmp)(temp->next->data, data_ref))) {
            tmp = temp->next->next;
            free(temp->next);
            temp->next = tmp;
            break;
        }
        temp = temp->next;
    }
    return (0);
}
