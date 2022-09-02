/*
** EPITECH PROJECT, 2022
** Project
** File description:
** generator
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_

typedef struct test_cell {
    char cell;
} test_cell_t;

typedef struct maze {
    char **map;
    int size_x;
    int size_y;
    int pos_x;
    int pos_y;
    int up;
    int down;
    int left;
    int right;
    int possibility;
    test_cell_t *test_cell;
    int which_way;
    int end;
} maze_t;

int manage_error(int ac, char **av);
int my_str_isnum(char const *str);
void manage_map_generation(int ac, char **av);
void my_putstr(char const *str);
void check_possibilities(maze_t *maze);
void go_up(maze_t *maze);
void go_down(maze_t *maze);
void go_right(maze_t *maze);
void go_left(maze_t *maze);
void check_two_way(maze_t *maze);
void check_one_way(maze_t *maze);
void check_three_way(maze_t *maze);
void generate_path(maze_t *maze);
void check_pos_stuck(maze_t *maze);
void free_test_cell(maze_t *maze);
int check_end(maze_t *maze);
void fill_back(maze_t *maze, int i, int j);

#endif /* !GENERATOR_H_ */
