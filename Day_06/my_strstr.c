/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** strstr
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen(to_find);
    int test = 0;

    if (len == 0)
        return (str);
    for (int i = 0; str[i] != '\0'; i++) {
        test = 0;
        for (int j = 0; str[i] == to_find[j]; j++) {
            test++;
            i++;
        }
        if (test == len)
            return (&str[i - test]);
        i -= test;
    }
    return (NULL);
}
