/*
** EPITECH PROJECT, 2023
** my_put_number.c
** File description:
** putnumber
*/

void my_putnbr(long long nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= 10)
        my_putnbr(nbr / 10);
    my_putchar('0' + nbr % 10);
}
