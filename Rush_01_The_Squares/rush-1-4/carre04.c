/*
** EPITECH PROJECT, 2023
** carre04.c
** File description:
** carre04
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int error(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 14);
        return (84);
    }
}

int static square_top(int x, int y)
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

int static square_side(int x, int y)
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

int static square_bottom(int x, int y)
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

void rush(int x, int y)
{
    if (error(x, y) == 84)
        return;
    square_top(x, y);
    square_side(x, y);
    square_bottom(x, y);
}

int main(void)
{
    rush(5, 3);
    printf("\n");
    rush(5, 1);
    printf("\n");
    rush(1, 1);
    printf("\n");
    rush(1, 5);
    printf("\n");
    rush(3, 5);
}
