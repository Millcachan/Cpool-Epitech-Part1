/*
** EPITECH PROJECT, 2023
** test_my_strcmp.c
** File description:
** test_strcmp
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(test_my_strncmp, compare_two_string)
{
    char s1[8] = {0};
    char s2[6] = {0};
    int n = 7;

    cr_assert_eq(my_strncmp("World !", "World", n), 1);
}

Test(test_my_strncmp2, compare_two_string2)
{
    char s1[6] = {0};
    char s2[6] = {0};
    int n = 7;

    cr_assert_eq(my_strncmp("World", "World", n), 0);
}

Test(test_my_strncmp3, compare_two_string3)
{
    char s1[6] = {0};
    char s2[8] = {0};
    int n = 7;

    cr_assert_eq(my_strncmp("World", "World !", n), (-1));
}

Test(test_my_strncmp4, compare_two_string4)
{
    char s1[6] = {0};
    char s2[8] = {0};
    int n = 0;

    cr_assert_eq(my_strncmp("World", "World !", n), 0);
}
