/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_ultimate_range.c                         */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    if(max <= min)
    {
        *range = NULL;
        return 0;
    }
    *range = malloc((max - min) * 4);
    if(*range == NULL)
    {
        return -1;
    }
    int i;
    i = 0;
    while(min + i < max)
    {
        (*range)[i] = min + i;
        i++;
    }
    return i;
}
