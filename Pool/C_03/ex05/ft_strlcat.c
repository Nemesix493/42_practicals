/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strlcat.c                                */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <stddef.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i, j;
    i = 0;
    j = 0;
    while (src[j] != '\0' && i < size)
    {
        if(dest[i] == '\0')
        {
            dest[i] = src[j];
            j++;
            if(i+1 < size)
            {
                dest[i+1] = '\0';
            }
        }
        i++;
    }
    return i;
}
