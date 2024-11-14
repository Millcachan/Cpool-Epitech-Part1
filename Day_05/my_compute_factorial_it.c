/*
** EPITECH PROJECT, 2023
** my_compute_factorial_it.c
** File description:
** computefactorial
*/

int my_compute_factorial_it(int nb)
{
    int fact = 1;

    if (nb < 0 || nb > 12)
        return 0;
    for (nb; nb != 0; nb--)
        fact *= nb;
    return fact;
}
