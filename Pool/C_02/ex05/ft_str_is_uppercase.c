/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_str_is_uppercase.c                       */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_str_is_uppercase(char *str)
{
    int is_uppercase, is_current_char_uppercase;
    is_uppercase = 1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        is_current_char_uppercase = 'A' <= str[i] && str[i] <= 'Z';
        is_uppercase = is_uppercase && is_current_char_uppercase; 
    }
    return is_uppercase;
}