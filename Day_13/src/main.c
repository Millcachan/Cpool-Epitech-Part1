/*
** EPITECH PROJECT, 2023
** test
** File description:
** test
*/

#include "../include/my.h"

static void test_window(sfRenderWindow *window)
{
    if (!window)
        exit(84);
}

static size_screen_t *set_size(int width, int height, int bpp)
{
    size_screen_t *size = malloc(sizeof(size_t));

    size->width = width;
    size->height = height;
    size->bpp = bpp;
    return size;
}

static sfRenderWindow *set_window(void)
{
    size_screen_t *size = set_size(250, 135, 32);
    sfVideoMode mode = {size->width, size->height, size->bpp};
    sfRenderWindow *window = sfRenderWindow_create(mode, "Tiny death",
    sfResize | sfClose, NULL);
    sfWindow_setFramerateLimit(window, 15);

    return window;
}

sfSprite *create_sprite(sfRenderWindow *window)
{
    sfTexture *vlad = sfTexture_createFromFile("asset/run_satyr.png", NULL);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, vlad, sfTrue);
    return sprite;
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left >= max_value)
        rect->left = 0;
    else
        rect->left += offset;
}

void clock(sfRenderWindow *window, sfSprite *sprite, sfEvent event)
{
    sfClock *clock;
    sfTime time;
    float seconds;

    clock = sfClock_create();
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 100000000000.0) {
        sfClock_restart(clock);
    }
}

sfIntRect create_rect(void)
{
    sfIntRect rect;

    rect.top = 0;
    rect.left = 0;
    rect.width = 32;
    rect.height = 32;
    return rect;
}

int main(void)
{
    sfEvent event;
    sfRenderWindow *window = set_window();
    sfSprite *sprite = create_sprite(window);
    sfIntRect rect = create_rect();
    sfVector2f sprite_pos;

    sprite_pos.x = 0;
    sprite_pos.y = -5;
    test_window(window);
    while (sfRenderWindow_isOpen(window)) {
        analyse_events(window, event);
        clock(window, sprite, event);
        move_rect(&rect, 32, 192);
        sfSprite_setTextureRect(sprite, rect);
        sfRenderWindow_clear(window, (sfColor){112, 112, 112, 255});
        sfSprite_setPosition(sprite, sprite_pos);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        sprite_pos.x += 4;
        if (sprite_pos.x > 270) {
            sprite_pos.x = -20;
            sprite_pos.y = rand() % 110 + 10;
        }
    }
    sfRenderWindow_destroy(window);
    return 0;
}
