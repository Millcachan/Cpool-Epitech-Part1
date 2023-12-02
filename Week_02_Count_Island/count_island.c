/*
** EPITECH PROJECT, 2023
** count_island.c
** File description:
** countisland
*/

#include <stddef.h>

int get_y(char **world)
{
    int y = 0;

    while (world[y] != 0)
        y++;
    return (y);
}

int get_x(char **world)
{
    int x = 0;

    while (world[0][x] != 0)
        x++;
    return (x);
}

int check(int y, int x, int *nb_island, char **world)
{
    int max_x = get_x(world) - 1;
    int max_y = get_y(world) - 1;

    if (y <= max_y && x <= max_x && y >= 0 && x >= 0) {
        if (world[y][x] == 'X') {
            world[y][x] = '0' + (*nb_island);
            check(y, x + 1, nb_island, world);
            check(y, x - 1, nb_island, world);
            check(y + 1, x, nb_island, world);
            check(y - 1, x, nb_island, world);
        }
    }
}

int test(int y, int x, int *nb_island, char **world)
{
    if (world[y][x] == 'X') {
        check(y, x, nb_island, world);
        *nb_island = (*nb_island) + 1;
    }
}

int count_island(char **world)
{
    int x_world = 0;
    int y_world = 0;
    int nb_island = 0;

    if (world[0] == NULL)
        return (0);
    x_world = get_x(world);
    y_world = get_y(world);
    for (int y = 0; y < y_world; y++)
        for (int x = 0; x < x_world; x++)
            test(y, x, &nb_island, world);
    return (nb_island);
}
