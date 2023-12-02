/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** strstr
*/

#include <stdio.h>
#include <string.h>

char *my_strstr(const char *str, const char *to_find)
{
    const char *h;
    const char *n;

    if (*to_find == '\0')
        return str;
    while (*str) {
        h = str;
        n = to_find;
        while (*n && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0')
            return str;
        str++;
    }
    return NULL;
}
