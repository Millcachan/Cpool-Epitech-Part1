/*
** EPITECH PROJECT, 2023
** my_str_to_word_array.c
** File description:
** strtowordarray
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int isalphanumeric(char c)
{
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

int count_words(char const *str)
{
    int new_word = 1;
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((isalphanumeric(str[i]) == 0))
            new_word = 1;
        if ((isalphanumeric(str[i]) == 1) && new_word == 1) {
            new_word = 0;
            count++;
        }
    }
    return (count);
}

int word_position(char const *str, int pos)
{
    int i = 0;

    while (isalphanumeric(str[pos + i]) == 1)
        i++;
    while (isalphanumeric(str[pos + i]) == 0)
        i++;
    return (i);
}

int len_word(char const *str, int pos, int isalpha)
{
    int i = pos;

    while (isalphanumeric(str[i]) == isalpha) {
        i++;
    }
    return (i - pos);
}

char **my_str_to_word_array(char const *str)
{
    int nb_words = count_words(str);
    char **tab;
    char nb_char = 0;
    int pos = len_word(str, 0, 0);

    tab = malloc(sizeof(char *) * (nb_words + 1));
    tab[nb_words] = NULL;
    for (int i = 0; i < nb_words; i++) {
        nb_char = len_word(str, pos, 1);
        tab[i] = malloc(sizeof(char) * (nb_char + 1));
        my_strncpy(tab[i], str + pos, nb_char);
        pos = pos + word_position(str, pos);
    }
    return (tab);
}
