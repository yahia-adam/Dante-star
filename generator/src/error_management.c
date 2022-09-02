/*
** EPITECH PROJECT, 2022
** Project
** File description:
** error_management
*/

#include <string.h>
#include "generator.h"
#include <stdlib.h>

int manage_error(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return -1;
    if (my_str_isnum(av[1]) == 0 || my_str_isnum(av[2]) == 0)
        return -1;
    if (av[1][0] == '\0' || av[2][0] == '\0')
        return -1;
    if (ac == 4 && strcmp("perfect", av[3]) != 0)
        return -1;
    return 0;
}
