/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strdup.c                                 */
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

char *ft_strdup(char *str)
{
    char *result;
    result = malloc(ft_strlen(str) + 1);
    if(result != NULL)
    {
        int i;
        i = 0;
        while(str[i] != '\0')
        {
            result[i] = str[i];
            i++;
        }
        result[i] = '\0';
    }
    return result;
}
