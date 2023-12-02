/*
** EPITECH PROJECT, 2023
** concat_params.c
** File description:
** concatparams
*/

#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    int size = 0;
    char *str;

    for (int i = 0; argv[i] != NULL; i++)
        size = size + sizeof(argv[i]);
    str = malloc(size * (argc + 1));
    for (int i = 0; argv[i] != NULL; i++) {
        if (argv[i + 1] == NULL)
            return (my_strcat(str, argv[i]));
        my_strcat(str, argv[i]);
        my_strcat(str, "\n");
    }
}
