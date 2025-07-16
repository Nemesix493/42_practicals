/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_convert_base2.c                          */
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

/*
** This function searches for character 'c' in the first 'size' characters
** of the string 'str'. If found, it returns the position (1-based index)
** of the first occurrence. If not found, it returns 0.
*/
int ft_is_char_in_nstr(char c, char *str, unsigned int size)
{
    unsigned int i;
    i = 0;
    while(i < size)
    {
        if(c == str[i])
        {
            return i + 1;
        }
        i++;
    }
    return 0;
}

int ft_base_is_valid(char *base)
{
    unsigned int i;
    i = 0;
    while(base[i] != '\0')
    {
        if(base[i] == '+' || base[i] == '-')
        {
            return 0;
        }
        if(ft_is_char_in_nstr(base[i], base, i) != 0)
        {
            return 0;
        }
        i++;
    }
    return i > 1;

}

int ft_strlen_from_int(int nb, char *base)
{
    int strlen, base_length;
    base_length = ft_strlen(base);
    strlen = 0;
    if(nb < 0)
    {
        nb *= -1;
        strlen++;
    }
    while(nb >= 1)
    {
        nb /= base_length;
        strlen++;
    }
    return strlen;
}
