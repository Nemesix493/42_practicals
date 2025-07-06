/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_putstr.c                                 */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

void ft_putstr(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    write(1, str, len);
}