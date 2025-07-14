/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_atoi.c                                   */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_atoi(char *str)
{
    int i, sign, result;
    i = 0;
    sign = 1;
    result = 0;
    while((str[i] == ' ' || str[i] == '-' || str[i] == '+') && str[i] != '\0')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return result*sign;
}
