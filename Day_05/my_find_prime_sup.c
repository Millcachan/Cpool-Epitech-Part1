/*
** EPITECH PROJECT, 2023
** my_is_prime_sup.c
** File description:
** isprimesup
*/

int my_find_prime_sup(int nb)
{
    for (nb; my_is_prime(nb) != 1; nb++);
    return nb;
}
