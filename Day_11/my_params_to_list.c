/*
** EPITECH PROJECT, 2023
** my_params_to_list.c
** File description:
** paramstolist
*/

#include <stddef.h>
#include <stdlib.h>
#include "mylist.h"
#include "my.h"

linked_list_t *create_cell(void *data)
{
    linked_list_t *cell = malloc(sizeof(linked_list_t));

    if (!cell)
        return (NULL);
    cell->data = data;
    cell->next = NULL;
    return (cell);
}

linked_list_t *add_at(linked_list_t *list, void *data, int pos)
{
    linked_list_t *prec = list;
    linked_list_t *curent = list;
    linked_list_t *cell = create_cell(data);

    if (pos == 0) {
        cell->next = list;
        return (cell);
    }
    for (int i = 0; i < pos; i++) {
        i++;
        prec = curent;
        curent = curent->next;
    }
    prec->next = cell;
    cell->next = curent;
    return (list);
}

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *list = NULL;

    if (ac == 0)
        return (list);
    for (int i = 0; i < ac; i++)
        list = add_at(list, av[i], 0);
    return (list);
}
