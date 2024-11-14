/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** strlen
*/

int my_strlen(char const *str)
{
    return (*str) ? 1 + my_strlen(str + 1) : 0;
}
