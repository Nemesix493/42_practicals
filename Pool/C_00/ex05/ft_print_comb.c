/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_print_comb.c                             */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

void ft_print_comb()
{
    char comma = ',';
    char space = ' ';
    for(char c = '0'; c <= '7'; c++)
    {
        for(char d = '1'; d <= '8'; d++)
        {
            if(d > c)
            {
                for(char e = '2'; e <= '9'; e++)
                {
                    if(e > d)
                    {
                        write(1, &c, 1);
                        write(1, &d, 1);
                        write(1, &e, 1);
                        write(1, &comma, 1);
                        write(1, &space, 1);
                    }
                }
            }
        }
    }
}