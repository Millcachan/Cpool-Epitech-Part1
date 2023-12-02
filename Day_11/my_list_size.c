/*
** EPITECH PROJECT, 2023
** my_list_size.c
** File description:
** listsize
*/

#include <stddef.h>
#include <stdlib.h>
#include "mylist.h"
#include <stdio.h>

int my_list_size(linked_list_t const *begin)
{
    int len = 0;
    linked_list_t *temp = begin;

    while (temp) {
        len++;
        temp = temp->next;
    }
    return (len);
}
