/*
** EPITECH PROJECT, 2023
** my_sprt_params.c
** File description:
** sortparams
*/

int main(int argc, char **argv)
{
    char *tmp = 0;
    int j = 0;

    for (int i = 1 ; i <= argc - 1; i++) {
        for (int j = i; j > 0 && my_strcmp(argv[j - 1], argv[j]) > 0; j--) {
            tmp = argv[j];
            argv[j] = argv[j - 1];
            argv[j - 1] = tmp;
        }
    }
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}
