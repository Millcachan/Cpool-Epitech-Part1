/*
** EPITECH PROJECT, 2023
** my_getnbr.c
** File description:
** getnbr
*/

int my_getnbr(char const *str)
{
    long nbr = 0;
    int i = 0;
    int signe = 1;

    while (str[i] == 45 || str[i] == 43 && str[i] != '\0') {
        if (str[i] == 45) {
            signe = signe * (-1);
        }
        i++;
    }
    while (str[i] > 47 && str[i] < 58) {
        nbr = nbr * 10;
        nbr = nbr + (str[i] - 48);
        if ((nbr * signe) > 2147483647 || (nbr * signe) < -2147483649) {
            return (0);
        }
        i++;
    }
    return (nbr * signe);
}
