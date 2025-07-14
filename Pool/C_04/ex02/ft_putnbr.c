/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_putnbr.c                                 */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

void ft_putnbr(int nb)
{
    char current_digit;
    int mod;
    if(nb < 0)
    {
        nb *= -1;
        write(1, "-", 1);
    }
    mod = 1000000000;
    while (mod >= 1)
    {
        if(nb > mod || nb < (-mod))
        {   current_digit = '0' + (nb / mod) % 10;
            write(1, &current_digit, 1);
        }
        mod /= 10;
    }
}
