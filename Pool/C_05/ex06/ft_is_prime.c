/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_is_prime.c                               */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_is_prime(int nb)
{
    if(nb == 1 || nb == 0)
    {
        return 0;
    }
    int i;
    i = 2;
    while(i*i <= nb)
    {
        if(nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
