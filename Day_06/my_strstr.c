/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    for (int i = 0; str[i]; i++)
        if (my_strncmp(str + i, to_find, my_strlen(to_find)) == 0)
            return str + i;
    return NULL;
}
