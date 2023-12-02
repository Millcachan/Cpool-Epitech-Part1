/*
** EPITECH PROJECT, 2023
** test_my_str_isprintable.c
** File description:
** teststrisprintable
*/

#include <criterion/criterion.h>

char *my_str_isprintable(char const *str);
 
Test(test_my_str_isprintable, test_if_the_string_is_printable)
{
    char *str = strdup("World");
    
    cr_assert_eq(my_str_isprintable(str), 1);
}
 
Test(test_my_str_isprintable2, test_if_the_string_is_printable2)
{
    char *str = strdup("world");

    str[0] = 20;
    
    cr_assert_eq(my_str_isprintable(str), 0);
}
 
Test(test_my_str_isprintable3, test_if_the_string_is_printable3)
{
    char *str = strdup("world");

    str[0] = 127;
    
    cr_assert_eq(my_str_isprintable(str), 0);
}

