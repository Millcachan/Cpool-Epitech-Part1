/*
** EPITECH PROJECT, 2023
** my_list.h
** File description:
** list
*/

#ifndef MYLIST_H
    #define MYLIST_H
typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;
#endif
