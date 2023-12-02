/*
** EPITECH PROJECT, 2023
** swap_endian_color.c
** File description:
** swapendiancolor
*/

union swap {
    int dec;
    char convert[4];
};

void my_swap_bit(char *a, char *b)
{
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int swap_endian_color(int color)
{
    union swap swaper;

    swaper.dec = color;
    my_swap_bit(&swaper.convert[0], &swaper.convert[3]);
    my_swap_bit(&swaper.convert[1], &swaper.convert[2]);
    return (swaper.dec);
}
