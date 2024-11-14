/*
** EPITECH PROJECT, 2023
** my_compute_power_it.c
** File description:
** computepowerit
*/

int my_compute_power_it(int nb, int p)
{
    long power = nb;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    for (int i = 1; i != p; i++)
        power = power * nb;
    if (nb > 2147483647 || nb < -2147483648)
        return 0;
    return power;
}
