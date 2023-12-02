/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** revstr
*/

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char tmp;

    for (int n = 0; n <= len / 2; n++) {
        tmp = str[n];
        str[n] = str[len - n];
        str[len - n] = tmp;
    }
    return str;
}
