/*
** EPITECH PROJECT, 2023
** carre03.c
** File description:
** rush
*/

int error3(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 14);
        return (84);
    }
}

int static square_top3(int x, int y)
{
    if (x == 1) {
        my_putchar('B');
        my_putchar('\n');
        return (0);
    }
    if (y == 1) {
        my_putchar('B');
    }
    if (y > 1)
        my_putchar('A');
    for (int i = 0; i < (x - 2); i++) {
        my_putchar('B');
    }
    if (x > 1 && y > 1)
        my_putchar('A');
    else
        my_putchar('B');
    my_putchar('\n');
}

int static square_side3(int x, int y)
{
    int i = 0;

    if ((y - 2) <= 0) {
        return (0);
    }
    for (int z = 0; z < (y - 2); z++) {
        my_putchar('B');
        i = 0;
        for (i; i < (x - 2); i++) {
            my_putchar(' ');
        }
        if (x > 1)
            my_putchar('B');
        my_putchar('\n');
    }
}

int static square_bottom3(int x, int y)
{
    if (y == 1)
        return (0);
    if (x == 1) {
        my_putchar('B');
        my_putchar('\n');
        return (0);
    }
    if (x != 1)
        my_putchar('C');
    for (int i = 0; i < (x - 2); i++) {
        my_putchar('B');
    }
    if (x >= 1)
        my_putchar('C');
    my_putchar('\n');
}

void rush3(int x, int y)
{
    if (error3(x, y) == 84)
        return;
    square_top3(x, y);
    square_side3(x, y);
    square_bottom3(x, y);
}
