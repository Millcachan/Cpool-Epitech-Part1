/*
** EPITECH PROJECT, 2023
** my_strcapitalize
** File description:
** strcapitalize
*/

char *my_strcapitalize(char *str)
{
    int new_word = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
            new_word = 1;
        if (str[i] >= 65 && str[i] <= 90 && new_word == 0)
            str[i] = str[i] + 32;
        if (str[i] >= 65 && str[i] <= 90 && new_word == 1)
            new_word = 0;
        if ((str[i] >= 97 && str[i] <= 122 && new_word == 1)) {
            str[i] = str[i] - 32;
            new_word = 0;
        }
    }
    return (str);
}
