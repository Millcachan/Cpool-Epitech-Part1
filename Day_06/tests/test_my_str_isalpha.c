/*
** EPITECH PROJECT, 2023
** test_my_str_isalpha.c
** File description:
** teststrisalpha
*/

#include <criterion/criterion.h>

char *my_str_isalpha(char *str);

Test(test_my_str_isalpha, test_if_the_string_is_letter)
{
    char *str = strdup("World");
    
    cr_assert_eq(my_str_isalpha(str), 1);
}

Test(test_my_str_isalpha2, test_if_the_string_is_letter2)
{
    char *str = strdup("w0rld");
    
    cr_assert_eq(my_str_isalpha(str), 0);
}

Test(test_my_str_isalpha3, test_if_the_string_is_letter3)
{
    char *str = strdup("&0-l_d9~");
    
    cr_assert_eq(my_str_isalpha(str), 0);
}

Test(test_my_str_isalpha4, test_if_the_string_is_letter4)
{
    char *str = strdup("~0-l_d9");
    
    cr_assert_eq(my_str_isalpha(str), 0);
}


Test(test_my_str_isalpha5, test_if_the_string_is_letter5)
{
    char *str = strdup("_0-l~d9");
    
    cr_assert_eq(my_str_isalpha(str), 0);
}

