/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_print_reverse_alphabet.c                 */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

void ft_print_reverse_alphabet()
{
    for(char c = 'z'; c >= 'a'; c--)
    {
        write(1, &c, 1);
    }
}