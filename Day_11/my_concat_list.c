/*
** EPITECH PROJECT, 2023
** my_concat_list.c
** File description:
** concatlist
*/

#include <stddef.h>
#include <stdlib.h>
#include "mylist.h"

void my_concat_list(linked_list_t **begin1 ,linked_list_t *begin2)
{
    linked_list_t *temp = *begin1;

    while (temp->next)
        temp = temp->next;
    temp->next = begin2;
}
