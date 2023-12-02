/*
** EPITECH PROJECT, 2023
** carre04.c
** File description:
** carre04
*/

int error4(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 14);
        return (84);
    }
}

int static square_top4(int x, int y)
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
        my_putchar('C');
    else
        my_putchar('B');
    my_putchar('\n');
}

int static square_side4(int x, int y)
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

int static square_bottom4(int x, int y)
{
    if (y == 1)
        return (0);
    if (x == 1) {
        my_putchar('B');
        my_putchar('\n');
        return (0);
    }
    if (x != 1)
        my_putchar('A');
    for (int i = 0; i < (x - 2); i++) {
        my_putchar('B');
    }
    if (x >= 1)
        my_putchar('C');
    my_putchar('\n');
}

void rush4(int x, int y)
{
    if (error4(x, y) == 84)
        return;
    square_top4(x, y);
    square_side4(x, y);
    square_bottom4(x, y);
}
