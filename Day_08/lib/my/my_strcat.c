/*
** EPITECH PROJECT, 2023
** my_strcat.c
** File description:
** strcat
*/

/*
** EPITECH PROJECT, 2023
** my_strcat.c
** File description:
** strcat
*/

int my_len(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int len = my_len(dest) +  my_len(src);
    int len_dest = my_len(dest);

    for (int i = 0; i != len; i++) {
        dest [i + len_dest] = src[i];
    }
    return (dest);
}
