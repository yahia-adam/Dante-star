/*
** EPITECH PROJECT, 2022
** Project
** File description:
** check_way
*/

#include "generator.h"
#include <stdlib.h>

static int return_cell(char cell)
{
    if (cell != 'X')
        return 1;
    return 0;
}

void check_possibilities(maze_t *maze)
{
    for (int i = 0; i < 4; ++i) {
        if (return_cell(maze->test_cell[i].cell) == 0 && i == 0)
            maze->up = 1;
        if (return_cell(maze->test_cell[i].cell) == 0 && i == 1)
            maze->down = 1;
        if (return_cell(maze->test_cell[i].cell) == 0 && i == 2)
            maze->right = 1;
        if (return_cell(maze->test_cell[i].cell) == 0 && i == 3)
            maze->left = 1;
    }
    if (maze->up == 1)
        maze->possibility += 1000;
    if (maze->down == 1)
        maze->possibility += 100;
    if (maze->right == 1)
        maze->possibility += 10;
    if (maze->left == 1)
        maze->possibility += 1;
}

void check_one_way(maze_t *maze)
{
    if (maze->possibility == 1)
        go_left(maze);
    if (maze->possibility == 10)
        go_right(maze);
    if (maze->possibility == 100)
        go_down(maze);
    if (maze->possibility == 1000)
        go_up(maze);
}

static void check_three_way_two(maze_t *maze)
{
    if (maze->possibility == 1011) {
        if (maze->which_way == 0)
            go_up(maze);
        if (maze->which_way == 1)
            go_right(maze);
        if (maze->which_way == 2)
            go_left(maze);
        return;
    }
    if (maze->possibility == 111) {
        if (maze->which_way == 0)
            go_down(maze);
        if (maze->which_way == 1)
            go_right(maze);
        if (maze->which_way == 2)
            go_left(maze);
        return;
    }
}

void check_three_way(maze_t *maze)
{
    maze->which_way = rand() % 3;
    if (maze->possibility == 1110) {
        if (maze->which_way == 0)
            go_up(maze);
        if (maze->which_way == 1)
            go_down(maze);
        if (maze->which_way == 2)
            go_right(maze);
        return;
    }
    if (maze->possibility == 1101) {
        if (maze->which_way == 0)
            go_up(maze);
        if (maze->which_way == 1)
            go_down(maze);
        if (maze->which_way == 2)
            go_left(maze);
        return;
    }
    check_three_way_two(maze);
}
