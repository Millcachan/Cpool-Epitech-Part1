/*
** EPITECH PROJECT, 2023
** my_print_digit.c
** File description:
** printdigit
*/

int my_print_digits(void)
{
    int a = 48;

    for (int i = 0; i < 10; i++)
        my_putchar(a++);
    return (0);
}
