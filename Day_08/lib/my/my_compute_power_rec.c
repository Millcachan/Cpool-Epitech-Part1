/*
** EPITECH PROJECT, 2023
** my_compute_power_rec.c
** File description:
** computepower
*/

int my_compute_power_rec_loop(long nb, int p)
{
    long nbr = nb;

    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    if (p != 1) {
        nbr *= my_compute_power_rec_loop(nb, p - 1);
    }
    if (nbr > 2147483647 || nbr < -2147483648) {
        return 0;
    }
    return (nbr);
}

int my_compute_power_rec(int nb, int p)
{
    return (my_compute_power_rec_loop(nb, p));
}
