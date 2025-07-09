/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strcapitalize.c                          */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        int previous_char_is_alphanum;
        previous_char_is_alphanum = 0;
        if(i > 0)
        {
            previous_char_is_alphanum = ('A' <= str[i-1] && str[i-1] <= 'Z')
            || ('a' <= str[i-1] && str[i-1] <= 'z')
            || ('0' <= str[i-1] && str[i-1] <= '9');
            
        } 
        if('a' <= str[i] && str[i] <= 'z' && !previous_char_is_alphanum)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}
