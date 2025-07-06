/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_print_alphabet.c                         */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

void ft_print_alphabet()
{
    for(char c = 'a'; c <= 'z'; c++)
    {
        write(1, &c, 1);
    }
}