
/*
** EPITECH PROJECT, 2023
** 
** File description:
** 
*/

#ifndef ADVANCED_DO_OP_H
    #define ADVANCED_DO_OP_H

struct operator {
    char *c;
    int	(*function)(int, int, int *);
};

int my_add(int a, int b, int *error);
int my_sub(int a, int b, int *error);
int my_div(int a, int b, int *error);
int my_mul(int a, int b, int *error);
int my_mod(int a, int b, int *error);
int my_usage(int a, int b, int *error);
#endif
