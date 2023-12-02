/*
** EPITECH PROJECT, 2023
** test_my_str_islower.c
** File description:
** teststrislower
*/

#include <criterion/criterion.h>

char *my_str_islower(char *str);

Test(test_my_str_islower, test_if_the_string_is_lower)
{
    char *str = strdup("World");
    
    cr_assert_eq(my_str_islower(str), 0);
}

Test(test_my_str_islower2, test_if_the_string_is_lower2)
{
    char *str = strdup("world");
    
    cr_assert_eq(my_str_islower(str), 1);
}

Test(test_my_str_islower3, test_if_the_string_is_lower3)
{
    char *str = strdup("~world");
    
    cr_assert_eq(my_str_islower(str), 0);
}
