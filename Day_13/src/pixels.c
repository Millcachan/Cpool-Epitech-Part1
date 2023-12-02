/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** pixels
*/

#include "../include/my.h"

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
    unsigned int y, sfColor color)
{
    unsigned int pixel_index = (y * framebuffer->width + x) * 4;

    framebuffer->pixels[pixel_index] = color.r;
    framebuffer->pixels[pixel_index + 1] = color.g;
    framebuffer->pixels[pixel_index + 2] = color.b;
    framebuffer->pixels[pixel_index + 3] = color.a;
}

void my_draw_square(framebuffer_t *buffer, sfVector2u position,
    unsigned int size, sfColor color)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            my_put_pixel(buffer, position.x + i, position.y + j, sfBlack);
}
