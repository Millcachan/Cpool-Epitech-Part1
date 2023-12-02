/*
** EPITECH PROJECT, 2023
** my_compute_power_rec.c
** File description:
** computepower
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    nb *= (p != 1) ? my_compute_power_rec(nb, p - 1) : 1;
    if (nb > 2147483647 || nb < -2147483648)
        return 0;
    return nb;
}
