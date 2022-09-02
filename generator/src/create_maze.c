/*
** EPITECH PROJECT, 2022
** Project
** File description:
** create_maze
*/

#include "generator.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

static void generate_map(maze_t *maze)
{
    maze->map = malloc(sizeof(char *) * (maze->size_y + 1));
    maze->map[maze->size_y] = NULL;
    for (int i = 0; i < maze->size_y; ++i) {
        maze->map[i] = malloc(sizeof(char) * (maze->size_x + 1));
        maze->map[i][maze->size_x] = '\0';
        for (int j = 0; j < maze->size_x; ++j)
            maze->map[i][j] = 'X';
    }
    maze->map[0][0] = '*';
    maze->map[maze->size_y - 1][maze->size_x - 1] = '*';
}

static void add_path_cell(maze_t *maze, int ac)
{
    if (maze->size_y > 2 && (maze->size_x % 2) == (maze->size_y % 2) &&
    ac == 4) {
        maze->map[maze->size_y - 2][maze->size_x - 1] = '*';
        return;
    }
    if (maze->size_x >= 2 && (maze->size_x % 2) == (maze->size_y % 2)
    && maze->size_x >= maze->size_y)
        maze->map[maze->size_y - 1][maze->size_x - 2] = '*';
    if (maze->size_y >= 2 && (maze->size_x % 2) == (maze->size_y % 2)
    && maze->size_x < maze->size_y)
        maze->map[maze->size_y - 2][maze->size_x - 1] = '*';
}

static void get_information(char **av, maze_t *maze)
{
    maze->size_x = atoi(av[1]);
    maze->size_y = atoi(av[2]);
    maze->pos_x = 0;
    maze->pos_y = 0;
}

void manage_map_generation(int ac, char **av)
{
    maze_t maze;

    maze.test_cell = malloc(sizeof(test_cell_t) * 4);
    srand(time(NULL));
    get_information(av, &maze);
    generate_map(&maze);
    add_path_cell(&maze, ac);
    generate_path(&maze);
}
