/*
** EPITECH PROJECT, 2023
** carre01.c
** File description:
** carre
*/

int error1(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 14);
        return (84);
    }
}

void static square_top1(int x, int y)
{
    my_putchar('o');
    for (int i = 0; i < (x - 2); i++) {
        my_putchar('-');
    }
    if (x > 1)
        my_putchar('o');
    my_putchar('\n');
}

int static square_side1(int x, int y)
{
    int i = 0;

    if ((y - 2) <= 0) {
        return (0);
    }
    for (int z = 0; z < (y - 2); z++) {
        my_putchar('|');
        i = 0;
        for (i; i < (x - 2); i++) {
            my_putchar(' ');
        }
        if (x > 1)
            my_putchar('|');
        my_putchar('\n');
    }
}

int static square_bottom1(int x, int y)
{
    if (y == 1)
        return (0);
    if (x != 1)
        my_putchar('o');
    for (int i = 0; i < (x - 2); i++) {
        my_putchar('-');
    }
    if (x >= 1)
        my_putchar('o');
    my_putchar('\n');
}

void rush1(int x, int y)
{
    if (error1(x, y) == 84)
        return;
    square_top1(x, y);
    square_side1(x, y);
    square_bottom1(x, y);
}
