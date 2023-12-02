/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** revstr
*/

char *my_revstr(char *str)
{
    int len = 0;
    int i = 0;
    int j = 0;
    char temp = 0;

    while (str[len + 1] != '\0') {
        len++;
    }
    i = len;
    while (j < i) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
    return (str);
}
