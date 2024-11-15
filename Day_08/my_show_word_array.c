/*
** EPITECH PROJECT, 2023
** my_show_word_array.c
** File description:
** showwordarray
*/

int my_show_word_array(char const **tab)
{
    for (int i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
