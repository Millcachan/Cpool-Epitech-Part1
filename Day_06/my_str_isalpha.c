/*
** EPITECH PROJECT, 2023
** my_str_isalpha.c
** File description:
** : strisalpha
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
            return 0;
    return 1;
}
