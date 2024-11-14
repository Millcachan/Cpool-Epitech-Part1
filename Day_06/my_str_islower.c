/*
** EPITECH PROJECT, 2023
** my_str_islower.c
** File description:
** strislower
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 'a' || str[i] > 'z')
            return 0;
    return 1;
}
