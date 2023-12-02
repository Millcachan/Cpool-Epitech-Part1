/*
** EPITECH PROJECT, 2023
** my_params_to_array.c
** File description:
** paramstoarray
*/

#include "include/my.h"
#include <stddef.h>
#include <unistd.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *param;

    param = malloc(sizeof(struct info_param) * (ac + 1));
    if (param == NULL)
        return (NULL);
    for (int i = 0; av[i]; i++) {
        param[i].length = my_strlen(av[i]);
        param[i].str = av[i];
        param[i].copy = my_strdup(av[i]);
        param[i].word_array = my_str_to_word_array(av[i]);
    }
    param[ac].str = NULL;
    return (param);
}
