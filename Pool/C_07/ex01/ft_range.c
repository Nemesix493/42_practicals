/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_range.c                                 */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    if(max <= min)
    {
        return NULL;
    }
    int *result, i;
    result = malloc((max - min) * 4);
    i = 0;
    while(min + i < max)
    {
        result[i] = min + i;
        i++;
    }
    return result;
}
