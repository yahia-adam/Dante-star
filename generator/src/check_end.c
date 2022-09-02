/*
** EPITECH PROJECT, 2022
** Project
** File description:
** check_end
*/

#include "generator.h"

void fill_back(maze_t *maze, int i, int j)
{
    if (maze->map[i][j] == 'o')
        maze->map[i][j] = '*';
}

static void check_stacked_cell(maze_t *maze, int i, int j)
{
    if (maze->map[i][j] == 'X' && maze->map[i + 1][j] == 'X' &&
    maze->map[i][j + 1] == 'X' && maze->map[i + 1][j + 1] == 'X')
        maze->end = 1;
}

int check_end(maze_t *maze)
{
    maze->end = 0;
    for (int i = 0; i < maze->size_y - 1 && maze->end == 0; ++i)
        for (int j = 0; j < maze->size_x - 1 && maze->end == 0; ++j)
            check_stacked_cell(maze, i, j);
    if (maze->end == 1)
        return 1;
    return 0;
}
