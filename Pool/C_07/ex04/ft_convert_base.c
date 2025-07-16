/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_convert_base.c                           */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <stdlib.h>

int ft_strlen(char *str);

int ft_is_char_in_nstr(char c, char *str, unsigned int size);

int ft_base_is_valid(char *base);

int ft_strlen_from_int(int nb, char *base);

int ft_atoi_base(char *str, char *base)
{
    int i, sign, result, digit_value, base_length;
    i = 0;
    sign = 1;
    result = 0;
    if(ft_base_is_valid(base))
    {
        while(str[i] == ' ' || str[i] == '-' || str[i] == '+')
        {
            if(str[i] == '-')
            {
                sign *= -1;
            }
            i++;
        }
        base_length = ft_strlen(base);
        digit_value = ft_is_char_in_nstr(str[i], base, base_length);
        while(digit_value)
        {
            result = result * base_length + digit_value - 1;
            i++;
            digit_value = ft_is_char_in_nstr(str[i], base, base_length);
        }
    }
    return result*sign;
}

char *ft_itoa_base(int nbr, char *base)
{
    int malloc_size, base_length, sign;
    char *result;
    base_length = ft_strlen(base);
    malloc_size = ft_strlen_from_int(nbr, base);
    result = (char *)malloc((malloc_size + 1) * sizeof(char));
    if(!ft_base_is_valid(base) || result == NULL)
    {
        free(result);
        return NULL;
    }
    sign = 0;
    if(nbr < 0)
    {
        nbr *= -1;
        sign = 1;
        result[0] = '-';
    }
    result[malloc_size] = '\0';
    while(malloc_size > sign)
    {
        malloc_size--;
        result[malloc_size] = base[nbr % base_length];
        nbr /= base_length;
    }
    return result;
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    if(!ft_base_is_valid(base_from))
    {
        return NULL;
    }
    return ft_itoa_base(ft_atoi_base(nbr, base_from), base_to);
}
