/*
** EPITECH PROJECT, 2023
** my_evil_str.c
** File description:
** evilstr
*/

char *my_evil_str(char *str)
{
    int len = 0;
    int i = 0;
    int j = 0;
    char temp = 0;

    while (str[len + 1] != '\0')
        len++;
    i = len;
    while (j++ < i--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return (str);
}
