/*
** EPITECH PROJECT, 2023
** my_strdup.c
** File description:
** strdup
*/

#include <stdlib.h>
#include <stdio.h>

char *my_strdup(char const *src)
{
    return (!src) ? NULL : my_strcpy(malloc(my_strlen(src)), src);
}

