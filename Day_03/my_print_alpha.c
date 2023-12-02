/*
** EPITECH PROJECT, 2023
** my_print_alpha
** File description:
** printalpha
*/

int my_print_alpha(void)
{
    int a = 97;

    for (int i = 0; i < 26; i++)
        my_putchar(a++);
    return (0);
}
