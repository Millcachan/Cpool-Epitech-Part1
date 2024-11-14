/*
** EPITECH PROJECT, 2023
** my_strlowcase.c
** File description:
** strlowcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    return str;
}
