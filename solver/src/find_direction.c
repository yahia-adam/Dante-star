/*
** EPITECH PROJECT, 2022
** solver
** File description:
** find_direction
*/

#include "solver.h"

static bool inter_find_direction(solver_t *s, char c, char a)
{
    if (s->pos + 1 != '\0') {
        if (s->file[s->pos + 1] == c) {
            s->file[s->pos + 1] = 'o';
            s->pos = s->pos + 1;
            return true;
        }
    }
    if (s->pos - 1 > 0)
        if (s->file[s->pos - 1] == c) {
            s->file[s->pos - 1] = a;
            s->pos = s->pos - 1;
            return true;
    }
    return (false);
}

bool find_direction(solver_t *s, char c, char a)
{
    if ((s->pos + s->column) < s->len_file) {
        if (s->file[s->pos + s->column] == c) {
            s->pos = s->pos + s->column;
            s->file[s->pos] = a;
            return true;
        }
    }
    if (inter_find_direction(s, c, a) == true)
        return true;
    if (s->pos - s->column > 0)
        if (s->file[s->pos - s->column] == c) {
            s->file[s->pos - s->column] = a;
            s->pos = s->pos - s->column;
            return true;
        }
    return false;
}
