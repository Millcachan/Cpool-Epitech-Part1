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
    char *strdup = malloc(sizeof(char) * (my_strlen(src)));

    my_strcpy(strdup, src);
    return (strdup);
}
