/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** events
*/

#include "../include/my.h"

void manage_mouse_click(sfMouseButtonEvent event)
{
    printf("Mouse x = %d, Mouse y = %d\n", event.x, event.y);
}

void analyse_events(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
            exit(0);
        }
        if (event.type == sfEvtMouseButtonPressed) {
            manage_mouse_click(event.mouseButton);
        }
    }
}
