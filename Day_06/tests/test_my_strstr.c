/*
** EPITECH PROJECT, 2023
** test_my_strstr.c
** File description:
** test_strstr
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(test_my_strstr, find_a_string_in_another)
{
    char str[13] = {0};
    char to_find[6] = {0};

    cr_assert_str_eq(my_strstr("HelloWorld !", "World"), strdup("World !"));
}
