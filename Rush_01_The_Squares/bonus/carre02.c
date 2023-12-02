/*
** EPITECH PROJECT, 2023
** carre02.c
** File description:
** carre02
*/

int error2(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 14);
        return (84);
    }
}

int static square_top2(int x, int y)
{
    if (x == 1) {
        my_putchar('*');
        my_putchar('\n');
        return (0);
    }
    if (y == 1) {
        my_putchar('*');
    }
    if (y > 1)
        my_putchar('/');
    for (int i = 0; i < (x - 2); i++) {
        my_putchar('*');
    }
    if (x > 1 && y > 1)
        my_putchar('\\');
    else
        my_putchar('*');
    my_putchar('\n');
}

int static square_side2(int x, int y)
{
    int i = 0;

    if ((y - 2) <= 0) {
        return (0);
    }
    for (int z = 0; z < (y - 2); z++) {
        my_putchar('*');
        i = 0;
        for (i; i < (x - 2); i++) {
            my_putchar(' ');
        }
        if (x > 1)
            my_putchar('*');
        my_putchar('\n');
    }
}

int static square_bottom2(int x, int y)
{
    if (y == 1)
        return (0);
    if (x == 1) {
        my_putchar('*');
        my_putchar('\n');
        return (0);
    }
    if (x != 1)
        my_putchar('\\');
    for (int i = 0; i < (x - 2); i++) {
        my_putchar('*');
    }
    if (x >= 1)
        my_putchar('/');
    my_putchar('\n');
}

void rush2(int x, int y)
{
    if (error2(x, y) == 84);
        return;
    square_top2(x, y);
    square_side2(x, y);
    square_bottom2(x, y);
}
