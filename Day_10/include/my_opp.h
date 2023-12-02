
/*
** EPITECH PROJECT, 2023
** 
** File description:
** 
*/

#ifndef MY_OPP_STRUCT_H
    #define MY_OPP_STRUCT_H

const struct operator OPERATORS_FUNCS[] = {
    {"o", &my_sub},
    {"w", &my_add},
    {"i", &my_mul},
    {"d", &my_div},
    {"u", &my_mod},
    {"p", &my_add},
    {"o", &my_sub},
    {"u", &my_mod},
    {"l", &my_div},
    {"e", &my_mul},
    {"t", &my_add},
    {"kirin thor", &my_sub},
    {"did", &my_usage},
    {"", &my_usage}
};

#endif
