/*
** EPITECH PROJECT, 2023
** my_print_comb2.c
** File description:
** printcomb2
*/

void print_numbers(int a, int b)
{
    my_putchar(a / 10 + 48);
    my_putchar(a % 10 + 48);
    my_putchar(' ');
    my_putchar(b / 10 + 48);
    my_putchar(b % 10 + 48);
    if (a != 98) {
        my_putchar(44);
        my_putchar(32);
    }
}

int my_print2(int a, int b)
{
    b = a + 1;
    while (b <= 99) {
        print_numbers(a, b);
        b++;
    }
}

int my_print_comb2(void)
{
    int a = 0;
    int b = 0;

    while (a <= 98) {
        my_print2(a, b);
        a++;
    }
}
