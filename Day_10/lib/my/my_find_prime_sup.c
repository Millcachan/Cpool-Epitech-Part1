/*
** EPITECH PROJECT, 2023
** my_is_prime_sup.c
** File description:
** isprimesup
*/

int is_prime(int nb)
{
    int i = 2;

    if (nb <= 1)
        return (0);
    while ((i * i) <= nb) {
        if ((nb % i) == 0) {
            return (0);
        }
        i++;
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    int test = nb;

    while (is_prime(test) != 1){
        test++;
    }
    return (test);
}
