/*
** EPITECH PROJECT, 2022
** solver
** File description:
** solver
*/

#ifndef SOLVER_H_
    #define SOLVER_H_

typedef enum {
    true,
    false,
} bool;

typedef struct solver_s {
    int pos;
    char *file;
    bool end;
    int column;
    int len_file;
} solver_t;

void my_putstr(char const *str);
bool find_direction(solver_t *s, char c, char a);
void backtrack(solver_t *s);
int solver(solver_t *s);
char *read_file(char *filepath);
int my_strlen(char const *str);
#endif/*!SOLVER_H_ */
