/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_is_negative.c                            */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

void ft_is_negative(int n)
{
    char c;
    if(n < 0)
    {
       c = 'N';
    }
    else
    {
        c = 'P';
    }
    write(1, &c, 1);
}