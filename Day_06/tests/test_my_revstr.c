/*
** EPITECH PROJECT, 2023
** test_my_strncpy.c
** File description:
** teststrncpy
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(test_revstr, return_value_is_reversed)
{
    char str[6] = {0};

    strcpy(str, strdup("Hello"));
    cr_assert_str_eq(my_revstr(str), strdup("olleH"));
}
