/*
** EPITECH PROJECT, 2022
** Project
** File description:
** check_stuck
*/

#include "generator.h"
#include <stdlib.h>

static void get_cell_info(maze_t *maze, int vertical, int horizontal)
{
    free_test_cell(maze);
    if (horizontal >= 2 && horizontal <= (maze->size_x - 1) - 2) {
        maze->test_cell[2].cell = maze->map[vertical][horizontal + 2];
        maze->test_cell[3].cell = maze->map[vertical][horizontal - 2];
    }
    if (horizontal >= 2 && horizontal > (maze->size_x - 1) - 2)
        maze->test_cell[3].cell = maze->map[vertical][horizontal - 2];
    if (horizontal < 2 && horizontal <= (maze->size_x - 1) - 2)
        maze->test_cell[2].cell = maze->map[vertical][horizontal + 2];
    if (vertical >= 2 && vertical <= (maze->size_y - 1) - 2) {
        maze->test_cell[0].cell = maze->map[vertical + 2][horizontal];
        maze->test_cell[1].cell = maze->map[vertical - 2][horizontal];
    }
    if (vertical >= 2 && vertical > (maze->size_y - 1) - 2)
        maze->test_cell[1].cell = maze->map[vertical - 2][horizontal];
    if (vertical < 2 && vertical <= (maze->size_y - 1) - 2)
        maze->test_cell[0].cell = maze->map[vertical + 2][horizontal];
}

static void check_vertical(maze_t *maze, int i)
{
    for (int j = 0; j < maze->size_y; j += 2)
        if (maze->map[j][i] == '*') {
            get_cell_info(maze, i, j);
            maze->pos_x = i;
            maze->pos_y = j;
            return;
        }
}

static void check_horizontal(maze_t *maze, int i)
{
    for (int j = 0; j < maze->size_x; j += 2)
        if (maze->map[i][j] == '*') {
            get_cell_info(maze, i, j);
            maze->pos_x = j;
            maze->pos_y = i;
            return;
        }
}

void check_pos_stuck(maze_t *maze)
{
    int rdm = rand() % 2;

    maze->pos_x = 0;
    maze->pos_y = 0;
    for (int i = 0; i < maze->size_x && rdm == 0; i += 2) {
        check_vertical(maze, i);
        if (maze->pos_x != 0 || maze->pos_y != 0)
            return;
    }
    for (int i = 0; i < maze->size_y && rdm == 1; i += 2) {
        check_horizontal(maze, i);
        if (maze->pos_x != 0 || maze->pos_y != 0)
            return;
    }
}
