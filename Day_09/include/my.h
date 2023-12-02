/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#ifndef TEST_H
    #define TEST_H
    #define INC_H

struct info_param {
    int length;
    char *str;
    char *copy;
    char **word_array;
};

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_compute_square_root2(int nb, int i);
int my_find_prime_sup(int nb);
int my_getnbr(char *str);
int my_is_prime(int nb);
int my_isneg(int n);
void my_put_nbr(int i);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char *src);
int my_strlen(char *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char *src, int n);
char *my_strstr(const char *str, const char *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char **my_str_to_word_array(char const *str);
int isalphanumeric(char c);
int count_words(char const *str);
int word_position(char const *str, int pos);
int len_word(char const *str, int pos, int isalpha);
char *my_strdup(char const *src);
int my_compute_power_rec_loop(long nb, int p);
int my_show_word_array(char const **tab);
int get_color(unsigned char red, unsigned char green, unsigned char blue);
#endif
