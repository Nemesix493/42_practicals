/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strs_to_tab.h                            */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#ifndef FT_STRS_TO_TAB_H
# define FT_STRS_TO_TAB_H

typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
} t_stock_str;

t_stock_str *ft_strs_to_tab(int ac, char **av);
int ft_strlen(char *str);

#endif