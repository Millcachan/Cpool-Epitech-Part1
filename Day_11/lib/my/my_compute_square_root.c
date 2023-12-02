/*
** EPITECH PROJECT, 2023
** my_compute_square_root.c
** File description:
** computesquareroot
*/

int my_compute_square_root2(int nb, int i)
{
    if ((i * i) < nb) {
        i++;
        my_compute_square_root2(nb, i);
    } else if ((i * i) == nb) {
        return (i);
    } else {
        return (0);
    }
}

int my_compute_square_root(int nb)
{
    int i = 0;
    int ret = 0;

    ret = my_compute_square_root2(nb, i);
    return (ret);
}
