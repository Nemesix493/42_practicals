/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_show_tab.c                               */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>
#include "../ex04/ft_strs_to_tab.h"

void ft_putstr_reverse(char *str)
{
    int i;
    i = ft_strlen(str) - 1;
    while(i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
}

int ft_base_is_valid(char *base)
{
    int i, j;
    i = 0;
    while(base[i] != '\0')
    {
        if(base[i] == '+' || base[i] == '-')
        {
            return 0;
        }
        j = i - 1;
        while(j >= 0)
        {
            if(base[i] == base[j])
            {
                return 0;
            }
            j--;
        }
        i++;
    }
    return i > 1;

}

void ft_putnbr_base(int nbr, char *base)
{
    if(ft_base_is_valid(base))
    {
        char number[33];
        int base_length, is_nbr_neg, i;
        is_nbr_neg = nbr < 0;
        if(is_nbr_neg)
        {
            nbr *= -1;
        }
        base_length = ft_strlen(base);
        i = 0;
        while(nbr >= 1)
        {
            number[i] = base[nbr % base_length];
            nbr /= base_length;
            i++;
        }
        if(is_nbr_neg)
        {
            number[i] = '-';
            i++;
        }
        number[i] = '\0';
        ft_putstr_reverse(number);
    }
}

void ft_show_tab(t_stock_str *par)
{
    int i;
    i = 0;
    while(par[i].str != NULL)
    {
        write(1, par[i].str, par[i].size);
        write(1, "\n", 1);
        ft_putnbr_base(par[i].size, "0123456789");
        write(1, "\n", 1);
        write(1, par[i].copy, ft_strlen(par[i].copy));
        write(1, "\n", 1);
        i++;
    }
}
