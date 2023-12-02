/*
** EPITECH PROJECT, 2023
** get_color.c
** File description:
** getcolor
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int	color = red;

    color = color << 8;
    color += green;
    color = color << 8;
    color += blue;
    return color;
}
