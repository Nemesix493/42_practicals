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
    int nb_pow10 = 10;
    while(nb_pow10 < nb)
    {
        nb_pow10 *= 10;
    }
    int digit_pow10 = nb_pow10;
    while(digit_pow10 >= 10)
    {
        digit_pow10 /= 10;
        int digit_shift = nb / digit_pow10;
        char digit = '0' + digit_shift;
        nb -= digit_shift * digit_pow10; 
        write(1, &digit, 1);
    }
}