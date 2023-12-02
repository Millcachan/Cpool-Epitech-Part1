/*
** EPITECH PROJECT, 2023
** my_print_revalpha.c
** File description:
** printrevalpha
*/

int my_print_revalpha(void)
{
    int a = 122;

    for (int i = 0; i < 26; i++)
        my_putchar(a--);
    return (0);
}
