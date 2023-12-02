/*
** EPITECH PROJECT, 2023
** my_avanced_sort_word_array.c
** File description:
** avancedsortwordarray
*/

#include "include/my.h"
#include <stddef.h>

int my_advanced_sort_word_array(char **tab,
    int(*cmp)(char const *, char const *))
{
    char *tmp = 0;

    for (int i = 1 ; tab[i] != NULL; i++) {
        for (int j = i; j > 0 && cmp(tab[j - 1], tab[j]) > 0; j--) {
            tmp = tab[j];
            tab[j] = tab[j - 1];
            tab[j - 1] = tmp;
        }
    }
    return (0);
}
