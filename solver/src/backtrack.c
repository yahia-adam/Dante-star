/*
** EPITECH PROJECT, 2022
** solver
** File description:
** backtrack
*/

#include "solver.h"

static bool inter_inter_backtrack(solver_t *s)
{
    if (s->pos - 1 > 0)
        if (s->file[s->pos - 1] == '*') {
            s->file[s->pos] = 'o';
            return true;
        }
    if (s->pos - s->column > 0)
        if (s->file[s->pos - s->column] == '*') {
            s->file[s->pos] = 'o';
            return true;
        }
    return false;
}

static bool inter_backtrack(solver_t *s)
{
    if ((s->pos + s->column) < s->len_file)
        if (s->file[s->pos + s->column] == '*') {
            s->file[s->pos] = 'o';
            return true;
        }
    if (s->pos + 1 != '\0')
        if (s->file[s->pos + 1] == '*') {
            s->file[s->pos] = 'o';
            return false;
        }
    if (inter_inter_backtrack(s) == true)
        return true;
    return (false);
}

void backtrack(solver_t *s)
{
    s->file[s->pos] = ' ';
    while (1) {
        if (find_direction(s, 'o', ' ') == false)
            break;
        if (inter_backtrack(s) == false)
            break;
    }
}
