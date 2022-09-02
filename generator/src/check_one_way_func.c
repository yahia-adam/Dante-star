/*
** EPITECH PROJECT, 2022
** Project
** File description:
** check_one_way_func
*/

#include "generator.h"

void check_one_path(maze_t *maze)
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
