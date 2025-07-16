/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strs_to_tab.c                            */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <stdlib.h>
#include "ft_strs_to_tab.h"

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_strdup(char *str)
{
    char *result;
    result = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
    if(result != NULL)
    {
        int i;
        i = 0;
        while(str[i] != '\0')
        {
            result[i] = str[i];
            i++;
        }
        result[i] = '\0';
    }
    return result;
}

void ft_free_stocks_str(t_stock_str *stock, int size)
{
    while(size >= 0)
    {
        free(stock[size].copy);
        size--;
    }
    free(stock);
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *result;
    result = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
    if(!result)
    {
        return NULL;
    }
    int i;
    i = 0;
    while(i < ac)
    {
        result[i].size = ft_strlen(av[i]);
        result[i].str = av[i];
        result[i].copy = ft_strdup(av[i]);
        if (!result[i].copy)
        {
            ft_free_stocks_str(result, i - 1);
            return NULL;
        }
        i++;
    }
    return result;
}
