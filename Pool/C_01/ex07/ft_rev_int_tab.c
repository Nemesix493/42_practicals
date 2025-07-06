/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_rev_int_tab.c                            */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

void ft_rev_int_tab(int *tab, int size)
{
    int buffer;
    for(int i = 0; i < size / 2; i++)
    {
        buffer = tab[i];
        tab[i] = tab[size-i-1];
        tab[size-i-1] = buffer;
    }
}