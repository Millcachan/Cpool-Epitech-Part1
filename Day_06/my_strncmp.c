/*
** EPITECH PROJECT, 2023
** my_strncmp.c
** File description:
** strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; n > 0; i++) {
        if (s1[i] > s2[i])
            return s1[i] - s2[i];
        if (s1[i] < s2[i])
            return s2[i] - s1[i];
        if (s1[i] == s2[i] == '\0')
            return 0;
        n--;
    }
    return 0;
}
