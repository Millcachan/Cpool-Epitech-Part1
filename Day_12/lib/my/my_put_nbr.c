/*
** EPITECH PROJECT, 2023
** my_put_number.c
** File description:
** putnumber
*/

int my_put_nbr(int nb)
{
    long temp;

    if (nb < 0) {
        my_putchar(45);
        temp = nb;
        temp = temp * -1;
    } else {
        temp = nb;
    }
    if (temp > 9) {
        my_put_nbr(temp / 10);
    }
    my_putchar(temp % 10 + 48);
}
