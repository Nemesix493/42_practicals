/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_str_is_numeric.c                           */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_str_is_numeric(char *str)
{
    int is_numeric = 1;
    int current_char_is_numeric;
    for(int i = 0; str[i] != '\0'; i++)
    {
        current_char_is_numeric = '0' < str[i] && str[i] <= '9';
        is_numeric = is_numeric && current_char_is_numeric;
    }
    return is_numeric;
}