/*
** EPITECH PROJECT, 2022
** dante.h
** File description:
** dante.h
*/

#include "my_struct_solver.h"
#include <stdbool.h>

#ifndef _DANTE_H_
    #define _DANTE_H_

void up(solver_t *solv);
void down(solver_t *solv);
void left(solver_t *solv);
void right(solver_t *solv);
void print_arr(char **arr);
void solver(solver_t *solv);
int my_strlen(char const *str);
bool backtrack(solver_t *solv);
char *read_file(char *filepath);
void make_posibility(solver_t *solv);
position_t get_positon(int x, int y);
void direction(solver_t *solv, char c);
bool check_direction(solver_t *solv, char c);
int my_strcmp(char const *s1, char const *s2);
int add(int up, int left, int right, int down);
char **my_str_to_word_arr(char *str, char *str2);
#endif/* !_DANTE_H_ */
