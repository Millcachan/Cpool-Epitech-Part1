/*
** EPITECH PROJECT, 2023
** my_strncmp.c
** File description:
** strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n <= 0)
        return (0);
    while (n > 0) {
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] == s2[i] == '\0')
            return (0);
        i++;
        n -= 1;
    }
    return (0);
}
