/*
** EPITECH PROJECT, 2023
** my_print_comb2.c
** File description:
** printcomb2
*/

int my_print_comb2(void)
{
    int a = 0;
    int b = 0;

    while (a <= 98) {
        my_putchar(a / 10 + 48);
        my_putchar(a % 10 + 48);
        my_putchar(' ');
        my_putchar(b / 10 + 48);
        my_putchar(b % 10 + 48);
        if (a != 98) {
            my_putchar(',');
            my_putchar(' ');
        }
        a = (b == 99) ? a + 1: a;
        b = (b < 99) ? b + 1: a + 1;
    }
}
