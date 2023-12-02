/*
** EPITECH PROJECT, 2023
** cat.c
** File description:
** cat = miaou
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include "../include/my.h"

int error_message(char *file, int error_type)
{
    if (error_type == 21) {
        write(2, "cat: ", 5);
        write(2, file, my_strlen(file));
        write(2, ": Is a directory\n", 17);
    }
    if (error_type == 2) {
        write(2, "cat: ", 5);
        write(2, file, my_strlen(file));
        write(2, ": No such file or directory\n", 28);
    }
    return (84);
}

int file_reader(int argc, char **argv)
{
    int file;
    char BUFFER[32000];
    int size = 0;
    int value = 0;

    for (int i = 1; i < argc; i++) {
        file = open(argv[i], O_RDONLY);
        if (errno != 0) {
            value = error_message(argv[i], errno);
            errno = 0;
            continue;
        }
        size = read(file, BUFFER, 32000);
        BUFFER[size] = '\0';
        if (errno != 0)
            value = error_message(argv[i], errno);
        close(file);
        my_putstr(BUFFER);
    }
    return (value);
}

int main(int argc, char **argv)
{
    int file = 1;
    char BUFFER[32000];

    if (argc == 1) {
        while (file > 0) {
            file = read(0, BUFFER, 32000);
            write(1, BUFFER, file);
        }
    } else
        return (file_reader(argc, argv));
    return (0);
}
