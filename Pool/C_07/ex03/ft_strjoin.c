/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strjoin.c                                */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_strcat(char *dest, char *src)
{
    int i, j;
    i = 0;
    j = 0;
    while (src[j] != '\0')
    {
        if(dest[i] == '\0')
        {
            dest[i] = src[j];
            dest[i+1] = '\0';
            j++;
        }
        i++;
    }
    return dest;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    if(size == 0)
    {
        return malloc(0);
    }
    char *join;
    int malloc_size;
    int i;
    i = 0;
    malloc_size = (size - 1) * ft_strlen(sep) + 1;
    while(i < size)
    {
        malloc_size += ft_strlen(strs[i]);
        i++;
    }
    join = malloc(malloc_size);
    join[0] = '\0';
    i = 1;
    ft_strcat(join, strs[0]);
    while(i < size)
    {
        ft_strcat(join, sep);
        ft_strcat(join, strs[i]);
        i++;
    }
    return join;
}
