/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_iterative_factorial.c                    */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_iterative_factorial(int nb)
{
    int i;
    i = 1;
    while(i < nb)
    {
        nb *= i;
        i++;
    }
    return nb;
}
