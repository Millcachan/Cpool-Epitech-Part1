/*
** EPITECH PROJECT, 2023
** my_strcapitalize
** File description:
** strcapitalize
*/

char *my_strcapitalize(char *str)
{
    int new_word = 1;

    for (int i = 0; str[i]; i++) {
        if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
            new_word = 1;
        if (str[i] >= 'A' && str[i] <= 'Z' && !new_word)
            str[i] = str[i] + 32;
        if (str[i] >= 'A' && str[i] <= 'Z' && new_word)
            new_word = 0;
        if ((str[i] >= 'a' && str[i] <= 'z' && new_word)) {
            str[i] = str[i] - 32;
            new_word = 0;
        }
    }
    return str;
}
