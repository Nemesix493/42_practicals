/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_sort_int_tab.c                           */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

void ft_sort_int_tab(int *tab, int size)
{
    int is_swap = 1;
    while(is_swap)
    {
        is_swap = 0;
        int buffer;
        for(int i = 0; i < size - 1; i++)
        {
            if(tab[i] > tab[i+1])
            {
                is_swap = 1;
                buffer = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = buffer;
            }
        }
    }
}