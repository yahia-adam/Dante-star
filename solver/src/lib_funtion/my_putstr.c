/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** emacs
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putstr(char const *str)
{
    write(0, str, my_strlen(str));
}
