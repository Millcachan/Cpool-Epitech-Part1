/*
** EPITECH PROJECT, 2023
** my_putchar.c
** File description:
** putchar
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}
