/*
** EPITECH PROJECT, 2023
** test_my_strcapitalize.c
** File description:
** teststrcapitalize
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(test_my_strcapitalize, capitalize_the_string)
{
    char *str = strdup("woRld");
    
    cr_assert_str_eq(my_strcapitalize(str), "World");
}

Test(test_my_strcapitalize2, capitalize_the_string2)
{
    char *str = strdup("World");
    
    cr_assert_str_eq(my_strcapitalize(str), "World");
}

Test(test_my_strcapitalize3, capitalize_the_string3)
{
    char *str = strdup("heLLo woRld");
    
    cr_assert_str_eq(my_strcapitalize(str), "Hello World");
}
