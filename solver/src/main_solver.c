/*
** EPITECH PROJECT, 2022
** solver
** File description:
** main_solver
*/

#include "solver.h"
#include <stddef.h>

void init_struct(solver_t *s)
{
    s->end = false;
    s->pos = 0;
    for (s->column = 0; s->file[s->column] != '\n'
&& s->file[s->column] != '\0'; s->column++);
    s->column++;
    s->len_file = ((s->column - 1) * (s->column - 1)) + s->column - 3;
    if (s->file[0] == '*')
        s->file[0] = 'o';
    else
        s->end = false;
}

int main(int ac, char **av)
{
    solver_t s;

    if (ac != 2)
        return (84);
    if ((s.file = read_file(av[1])) == NULL)
        return (84);
    init_struct(&s);
    solver(&s);
    for (int i = 0; s.file[i] != '\0'; i++)
        if (s.file[i] == ' ')
            s.file[i] = '*';
    my_putstr(s.file);
    return (0);
}
