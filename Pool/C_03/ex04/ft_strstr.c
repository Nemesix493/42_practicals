/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strstr.c                                 */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <stddef.h>

char *ft_strstr(char *str, char *to_find)
{
    unsigned int i, j;
    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if(to_find[j] == '\0')
        {
            return str + i - j;
        }
        if(str[i] == to_find[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
        i++;
    }
    return NULL;
}
