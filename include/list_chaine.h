/*
** EPITECH PROJECT, 2021
** push_swap.h
** File description:
** push_swap
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef PUSH_SWAP_H_
    #define PUSH_SWAP_H_

typedef struct position_s {
    int x;
    int y;
} position_t;

typedef struct list_s {
    position_t elem;
    struct list_s *next;
} list_t;

void my_putnbr(int n);
void my_putchar(char c);
list_t *free_list(list_t *l);
void display_list(list_t *l);
int my_getnbr(char const *str);
void my_putstr(char const *str);
list_t *rm_elem(list_t *l, int pos);
position_t get_positon(int x, int y);
list_t *create_cell(position_t value);
position_t *get_elem(list_t *l, int pos);
void modif_elem(list_t *l, position_t *value, int pos);
list_t *add_elem(list_t *l, position_t value, int pos);

#endif/* !PUSH_SWAP_H_ */
