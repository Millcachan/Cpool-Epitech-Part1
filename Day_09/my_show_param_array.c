/*
** EPITECH PROJECT, 2023
** my_show_param_array.c
** File description:
** showparamarray
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include/my.h"

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; par[i].str; i++) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_show_word_array((const char **)par[i].word_array);
    }
    return (0);
}
