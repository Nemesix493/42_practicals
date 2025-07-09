/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_str_is_lowercase.c                       */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_str_is_lowercase(char *str)
{
    int is_lowercase, is_current_char_lowercase;
    is_lowercase = 1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        is_current_char_lowercase = 'a' <= str[i] && str[i] <= 'z';
        is_lowercase = is_lowercase && is_current_char_lowercase; 
    }
    return is_lowercase;
}