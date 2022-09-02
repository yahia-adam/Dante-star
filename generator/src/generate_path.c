/*
** EPITECH PROJECT, 2022
** Project
** File description:
** generate_path
*/

#include "generator.h"
#include <stdlib.h>
#include <stdio.h>

void free_test_cell(maze_t *maze)
{
    for (int i = 0; i < 4; ++i)
        maze->test_cell[i].cell = 'O';
}

static void get_cell_info(maze_t *maze)
{
    free_test_cell(maze);
    if (maze->pos_x >= 2 && maze->pos_x <= (maze->size_x - 1) - 2) {
        maze->test_cell[2].cell = maze->map[maze->pos_y][maze->pos_x + 2];
        maze->test_cell[3].cell = maze->map[maze->pos_y][maze->pos_x - 2];
    }
    if (maze->pos_x >= 2 && maze->pos_x > (maze->size_x - 1) - 2)
        maze->test_cell[3].cell = maze->map[maze->pos_y][maze->pos_x - 2];
    if (maze->pos_x < 2 && maze->pos_x <= (maze->size_x - 1) - 2)
        maze->test_cell[2].cell = maze->map[maze->pos_y][maze->pos_x + 2];
    if (maze->pos_y >= 2 && maze->pos_y <= (maze->size_y - 1) - 2) {
        maze->test_cell[0].cell = maze->map[maze->pos_y + 2][maze->pos_x];
        maze->test_cell[1].cell = maze->map[maze->pos_y - 2][maze->pos_x];
    }
    if (maze->pos_y >= 2 && maze->pos_y > (maze->size_y - 1) - 2)
        maze->test_cell[1].cell = maze->map[maze->pos_y - 2][maze->pos_x];
    if (maze->pos_y < 2 && maze->pos_y <= (maze->size_y - 1) - 2)
        maze->test_cell[0].cell = maze->map[maze->pos_y + 2][maze->pos_x];
}

static void init_value(maze_t *maze)
{
    maze->possibility = 0;
    maze->up = 0;
    maze->down = 0;
    maze->right = 0;
    maze->left = 0;
    maze->which_way = 0;
}

static void check_way(maze_t *maze)
{
    init_value(maze);
    get_cell_info(maze);
    check_possibilities(maze);
    check_three_way(maze);
    check_two_way(maze);
    check_one_way(maze);
    if (maze->possibility == 0) {
        maze->map[maze->pos_y][maze->pos_x] = 'o';
        check_pos_stuck(maze);
    }
}

void generate_path(maze_t *maze)
{
    while (check_end(maze) == 1)
        check_way(maze);
    for (int i = 0; maze->map[i] != NULL; ++i)
        for (int j = 0; maze->map[i][j] != '\0'; ++j)
            fill_back(maze, i, j);
    for (int i = 0; maze->map[i] != NULL; ++i) {
        my_putstr(maze->map[i]);
        if (maze->map[i + 1] != NULL)
            putchar('\n');
    }
}