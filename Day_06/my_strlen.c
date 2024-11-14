/*
** EPITECH PROJECT, 2023
** Day_06
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    return (*str) ? 1 + my_strlen(str + 1) : 0;
}
