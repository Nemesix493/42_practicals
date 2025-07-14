/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_recursive_factorial.c                    */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_recursive_factorial(int nb)
{
    if(nb <= 1)
    {
        return nb;
    }
    return ft_recursive_factorial(nb - 1) * nb;
}