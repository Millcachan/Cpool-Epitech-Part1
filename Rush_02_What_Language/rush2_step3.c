/*
** EPITECH PROJECT, 2023
** rush2_step3
** File description:
** rush 02
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/frequencies.h"

int error(int fail)
{
    write(2, "Stop: invalid using of function rush2", 38);
    return (fail);
}

char *my_strlowcase2(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    return (str);
}

int percentage(char *argv, int nb_occu)
{
    my_putstr(" (");
    my_put_nbr((nb_occu * 10000) / my_strlen(argv) / 100);
    my_putchar('.');
    my_put_nbr((nb_occu * 10000) / my_strlen(argv) % 100);
    if (((nb_occu * 10000) / my_strlen(argv) % 100) == 0) {
        my_put_nbr(0);
    }
    my_putstr("%)\n");
    return (0);
}

int frenquencies(int occu, int indice)
{
    if (indice >= 65 && 90 >= indice)
        indice = indice + 32;
    indice = indice - 97;
    for (int i = 0; i < 4; i+) {
        letters[i][indice] = letters[i][indice] - occu;
    }
    return (0);
}

static int english(void)
{
    int english = 0;

    for (int i = 0; i < 26; i++) {
        if (letters[0][i] < 0)
            letters[0][i] = letters[0][i] * (-1);
    }
    for (int i = 0; i < 26; i++)
        english = english + letters[0][i];
    return (english);    
}

static int fench(void)
{
    int french = 0;

    for (int i = 0; i < 26; i++) {
        if (letters[0][i] < 0)
            letters[0][i] = letters[0][i] * (-1);
    }
    for (int i = 0; i < 26; i++)
        french = french + letters[0][i];
    return (french);    
}

static int german(void)
{
    int german = 0;

    for (int i = 0; i < 26; i++) {
        if (letters[0][i] < 0)
            letters[0][i] = letters[0][i] * (-1);
    }
    for (int i = 0; i < 26; i++)
        german = german + letters[0][i];
    return (german);    
}

static int spanish(void)
{
    int spanish = 0;

    for (int i = 0; i < 26; i++) {
        if (letters[0][i] < 0)
            letters[0][i] = letters[0][i] * (-1);
    }
    for (int i = 0; i < 26; i++)
        spanish = spanish + letters[0][i];
    return (spanish);    
}

int print_language(int langue)
{
    if (langue == 1
}

char *language()
{
    int tab[4] = {english(), french(), german(), spanish()};
    int temp = 0;

    for (i=1 ; i < 4; i++) {
        j = i;
        while (j > 0 && tab[j-1] > tab[j]) {
            tmp = letters[j];
            letters[j] = letters[j-1];
            letters[j-1] = tmp;
            j--;
        }
    }
    print_language(tab[0]);
}

int step01(char **argv, char *lettre)
{
    int i;
    int nb_occu = 0;

    argv[i] = my_strlowcase2(argv[1]);
    for (i = 0; i < my_strlen(argv[1]); i++) {
        if (argv[1][i] == lettre[0] || argv[1][i] == lettre[0] + 32) {
            nb_occu++;
        }
    }
    my_putchar(lettre[0]);
    my_putstr(":");
    my_put_nbr(nb_occu);
    percentage(argv[1], nb_occu);
    frequencies(((nb_occu * 1000) / my_strlen(argv[1])), lettre[0]);
    language();
    return (0);
}

int main(int argc, char **argv)
{
    if (argc < 3)
        return (error(84));
    for (int i = 3; i <= argc; i++) 
        step01(argv, argv[i - 1]);
    return (0);
}
