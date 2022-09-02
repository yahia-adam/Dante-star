/*
** EPITECH PROJECT, 2022
** Project
** File description:
** go_in_a_direction
*/

#include "generator.h"

void go_up(maze_t *maze)
{
    maze->map[maze->pos_y + 1][maze->pos_x] = '*';
    maze->pos_y += 2;
    maze->map[maze->pos_y][maze->pos_x] = '*';
}

void go_down(maze_t *maze)
{
    maze->map[maze->pos_y - 1][maze->pos_x] = '*';
    maze->pos_y -= 2;
    maze->map[maze->pos_y][maze->pos_x] = '*';
}

void go_right(maze_t *maze)
{
    maze->map[maze->pos_y][maze->pos_x + 1] = '*';
    maze->pos_x += 2;
    maze->map[maze->pos_y][maze->pos_x] = '*';
}

void go_left(maze_t *maze)
{
    maze->map[maze->pos_y][maze->pos_x - 1] = '*';
    maze->pos_x -= 2;
    maze->map[maze->pos_y][maze->pos_x] = '*';
}
