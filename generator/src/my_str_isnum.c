/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_str_isnum
*/

int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    int i = 0;
    int len_str = my_strlen(str);

    for (i = 0; str[i] != '\0'; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            break;
    if (i == len_str)
        return (1);
    else
        return (0);
}