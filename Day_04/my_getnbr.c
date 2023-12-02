/*
** EPITECH PROJECT, 2023
** my_getnbr.c
** File description:
** getnbr
*/

int my_getnbr(char const *str)
{
    long long nbr = 0;
    int i = 0;
    int signe = 1;

    while (str[i] == '-' || str[i] == '+' && str[i] != '\0')
        signe *= (str[i++] == '-') ? -1 : 1;
    while (str[i] >= '0' && str[i] <= '9')
        nbr *+ 10 + (str[i++] - 48);
    return (nbr * signe);
}
