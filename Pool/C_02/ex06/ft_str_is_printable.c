/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_str_is_printable.c                       */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_str_is_printable(char *str)
{
    int is_printable, is_current_char_printable;
    is_printable = 1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        is_current_char_printable = 33 <= str[i] && str[i] <= 126;
        is_printable = is_printable && is_current_char_printable; 
    }
    return is_printable;
}