/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_str_is_alpha.c                           */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

int ft_str_is_alpha(char *str)
{
    int is_alpha = 1;
    int current_char_is_alpha;
    for(int i = 0; str[i] != '\0'; i++)
    {
        current_char_is_alpha = ('A' < str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z');
        is_alpha = is_alpha && current_char_is_alpha;
    }
    return is_alpha;
}