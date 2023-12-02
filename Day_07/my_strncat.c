/*
** EPITECH PROJECT, 2023
** my_strncat.c
** File description:
** strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest) +  my_strlen(src);
    int len_dest = my_strlen(dest);

    for (int i = 0; i != len && i < nb; i++)
        dest [i + len_dest] = src[i];
    return (dest);
}
