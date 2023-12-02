/*
** EPITECH PROJECT, 2023
** my_rev_list.c
** File description:
** revlist
*/

#include <stddef.h>
#include <stdlib.h>
#include "mylist.h"
#include "my.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *current = 0;
    linked_list_t *next = 0;
    linked_list_t *swap = *begin;
    int len = my_list_size((*begin));

    for (int i = 0; i < len; i++) {
        next = swap->next;
        swap->next = current;
        current = swap;
        swap = next;
    }
    (*begin) = current;
}
