/*
** EPITECH PROJECT, 2022
** my_struct.h
** File description:
** my_struct.h
*/

#include "list_chaine.h"

#ifndef _DANTE_STRUCT_H_
    #define _DANTE_STRUCT_H_

typedef struct solver_s {
    char **maze;
    int width_maze;
    int high_maze;
    list_t *list_a;
    list_t *list_b;
    position_t position;
    int up;
    int down;
    int left;
    int right;
} solver_t;

#endif/* !_DANTE_STRUCT_H_ */
