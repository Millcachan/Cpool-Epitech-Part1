/*
** EPITECH PROJECT, 2023
** my_strupcase.c
** File description:
** strupcase
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    return str;
}
