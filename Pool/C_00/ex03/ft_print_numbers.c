/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_print_numbers.c                          */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

void ft_print_numbers()
{
    for(char c = '0'; c <= '9'; c++)
    {
        write(1, &c, 1);
    }
}