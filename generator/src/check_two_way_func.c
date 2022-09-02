/*
** EPITECH PROJECT, 2022
** Project
** File description:
** check_two_way_func
*/

#include "generator.h"
#include <stdlib.h>

static void check_two_way_three(maze_t *maze)
{
    if (maze->possibility == 101) {
        if (maze->which_way == 0)
            go_down(maze);
        if (maze->which_way == 1)
            go_left(maze);
        return;
    }
    if (maze->possibility == 1010) {
        if (maze->which_way == 0)
            go_up(maze);
        if (maze->which_way == 1)
            go_right(maze);
        return;
    }
}

static void check_two_way_two(maze_t *maze)
{
    if (maze->possibility == 11) {
        if (maze->which_way == 0)
            go_right(maze);
        if (maze->which_way == 1)
            go_left(maze);
        return;
    }
    if (maze->possibility == 110) {
        if (maze->which_way == 0)
            go_down(maze);
        if (maze->which_way == 1)
            go_right(maze);
        return;
    }
    check_two_way_three(maze);
}

void check_two_way(maze_t *maze)
{
    maze->which_way = rand() % 2;
    if (maze->possibility == 1100) {
        if (maze->which_way == 0)
            go_up(maze);
        if (maze->which_way == 1)
            go_down(maze);
        return;
    }
    if (maze->possibility == 1001) {
        if (maze->which_way == 0)
            go_up(maze);
        if (maze->which_way == 1)
            go_left(maze);
        return;
    }
    check_two_way_two(maze);
}
