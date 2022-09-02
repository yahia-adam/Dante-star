/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "generator.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    if (manage_error(ac, av) == -1)
        return 84;
    manage_map_generation(ac, av);
    return 0;
}
