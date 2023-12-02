/*
** EPITECH PROJECT, 2023
** my_rev_params.c
** File description:
** revparams
*/

int main(int argc, char **argv)
{
    for (int i = argc; i > 0; i--) {
        my_putstr(argv[i - 1]);
        my_putchar('\n');
    }
}
