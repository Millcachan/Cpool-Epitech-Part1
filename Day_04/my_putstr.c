/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** putstr
*/

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
