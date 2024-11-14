/*
** EPITECH PROJECT, 2023
** my_print_comb.c
** File description:
** printcomb
*/

int my_print_comb(void)
{
    char abc[3] = "012";

    while (abc[0] <= '7') {
        write(1, &abc, 3);
        if (abc[0] != '7')
            write(1, ", ", 2);
        abc[0] = (abc[1] == '8') ? abc[0] + 1 : abc[0];
        abc[1] = (abc[2] == '9') ? abc[1] + 1 : abc[1];
        abc[1] = (abc[1] < '9') ? abc[1] : abc[0] + 1;
        abc[2] = (abc[2] < '9') ? abc[2] + 1 : abc[1] + 1;
    }
}
