/*
** EPITECH PROJECT, 2023
** my_print_comb.c
** File description:
** printcomb
*/

void print_number(int a, int b, int c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    if (a != 55) {
        my_putchar(44);
        my_putchar(32);
    }
}

int my_print_c(int a, int b, int c)
{
    c = b + 1;
    while (c <= 57) {
        print_number(a, b, c);
        c++;
    }
}

int my_print_b(int a, int b, int c)
{
    b = a + 1;
    while (b <= 56) {
        my_print_c(a, b, c);
        b++;
    }
}

int my_print_comb(void)
{
    int a = 48;
    int b = 49;
    int c = 50;

    while (a <= 55) {
        my_print_b(a, b, c);
        a++;
    }
}
