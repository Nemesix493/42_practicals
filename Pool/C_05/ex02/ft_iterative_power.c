/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_iterative_power.c                        */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_iterative_power(int nb, int power)
{
    int result;
    result = 1;
    while(power > 0)
    {
        result *= nb;
        power--;
    }
    return result;
}
