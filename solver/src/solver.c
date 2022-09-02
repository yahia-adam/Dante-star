/*
** EPITECH PROJECT, 2022
** solver
** File description:
** solver
*/

#include "solver.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

bool is_end(solver_t *s)
{
    if (s->file[s->len_file] == 'o')
        return true;
    return (false);
}

int solver(solver_t *s)
{
    while (1) {
        if (find_direction(s, '*', 'o') == false)
            backtrack(s);
        if (is_end(s) == true)
            break;
    }
    return (0);
}
