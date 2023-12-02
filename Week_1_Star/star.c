/*
** EPITECH PROJECT, 2023
** star.c
** File description:
** star
*/

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}

void static star_top(unsigned int size)
{
    for (int i = 0; i != (3 * size - 1); i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
    for (int j = 2; j < (size + 1); j++) {
        for (int i = 0; i != (3 * size - j); i++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int i = 0; i != (j * 2 - 3); i++) {
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
    }
}

int static star_line(unsigned int size)
{
    for (int i = 0; i < (size * 2 + 1); i++)
        my_putchar('*');
    for (int i = 0; i < (2 * size - 3); i++)
        my_putchar(' ');
    for (int i = 0; i < (size * 2 + 1); i++)
        my_putchar('*');
    my_putchar('\n');
}

int static star_mid_top(unsigned int size)
{
    for (int j = 1; j < size + 1; j++) {
        for (int i = 0; i < j; i++)
            my_putchar(' ');
        my_putchar('*');
        for (int z = 0; z < 6 * size - 3 - (2 * j); z++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
    }
}

int static star_mid_bot(unsigned int size)
{
    for (int j = size + 1; j > 2; j--) {
        for (int i = 1; i < j - 1; i++)
            my_putchar(' ');
        my_putchar('*');
        for (int z = 0; z < 6 * size + 1 - (2 * j); z++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
    }
}

int static star_bot(unsigned int size)
{
    for (int j = (size + 1); j > 2; j--) {
        for (int i = 0; i != (3 * size - j + 1); i++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int i = 0; i != (j * 2 - 5); i++) {
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
    }
    for (int i = 0; i != (3 * size - 1); i++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

void star(unsigned int size)
{
    if (size > 0) {
        if (size == 1) {
            write(1, "   *\n", 5);
            write(1, "*** ***\n", 8);
            write(1, " *   *\n", 7);
            write(1, "*** ***\n", 8);
            write(1, "   *\n", 5);
        } else {
            star_top(size);
            star_line(size);
            star_mid_top(size);
            star_mid_bot(size);
            star_line(size);
            star_bot(size);
        }
    }
}
