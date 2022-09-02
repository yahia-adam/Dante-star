/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** putstr
*/

#include <unistd.h>
#include <string.h>

void my_putstr(char const *str)
{
    write(1, str, strlen(str));
}
