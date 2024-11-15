/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; src[i] && n > i; i++)
        dest[i] = src[i];
    for (i; n > i; i++)
        dest[i] = '\0';
    return dest;
}
