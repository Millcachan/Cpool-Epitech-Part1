/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** strncpy
*/

char *my_strncpy(char *dest, char const *src , int n)
{
    int i = 0;

    for (i; src[i] != '\0' && n > i; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
