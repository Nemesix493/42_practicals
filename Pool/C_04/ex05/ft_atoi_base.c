/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_atoi_base.c                              */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

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
