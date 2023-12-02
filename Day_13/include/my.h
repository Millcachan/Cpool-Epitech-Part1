/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my
*/

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Window.h>
#include <SFML/Graphics/BlendMode.h>
#include <SFML/Graphics/CircleShape.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/ConvexShape.h>
#include <SFML/Graphics/Font.h>
#include <SFML/Graphics/FontInfo.h>
#include <SFML/Graphics/Glyph.h>
#include <SFML/Graphics/Image.h>
#include <SFML/Graphics/PrimitiveType.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/RectangleShape.h>
#include <SFML/Graphics/RenderStates.h>
#include <SFML/Graphics/RenderTexture.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Shader.h>
#include <SFML/Graphics/Shape.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Graphics/Transformable.h>
#include <SFML/Graphics/Vertex.h>
#include <SFML/Graphics/VertexArray.h>
#include <SFML/Graphics/VertexBuffer.h>
#include <SFML/Graphics/View.h>

#ifndef MY_H_
    #define MY_H_

struct framebuffer {
    int width;
    int height;
    sfUint8 *pixels;
};

typedef struct framebuffer framebuffer_t;

struct size_screen {
    int width;
    int height;
    int bpp;
};

typedef struct size_screen size_screen_t;

void framebuffer_destroy(framebuffer_t *framebuffer);
void analyse_events(sfRenderWindow *window, sfEvent event);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
    unsigned int y, sfColor color);
void my_draw_square(framebuffer_t *buffer, sfVector2u position,
    unsigned int size, sfColor color);

#endif /* !MY_H_ */
