/*
** EPITECH PROJECT, 2023
** my_sort_int_array.c
** File description:
** my_sort_int_array
*/

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (array[j] > array[j + 1])
                my_swap(&array[j], &array[j + 1]);
}
