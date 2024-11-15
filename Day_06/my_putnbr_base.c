/*
** EPITECH PROJECT, 2023
** my_putnbr_base.c
** File description:
** my_putnbr_base
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putnbr_base(long long nb, char *base)
{
    int base_len = my_strlen(base);

    if (base_len < 2)
        return;
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= base_len)
        my_put_nbr_base(nb / base_len, base);
    my_putchar(base[nb % base_len]);
}
