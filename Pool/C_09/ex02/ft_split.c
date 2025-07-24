/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_split.c                                  */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <stdlib.h>
#include "includes/libft.h"

/*
** This function searches for character 'c' in the first 'size' characters
** of the string 'str'. If found, it returns the position (1-based index)
** of the first occurrence. If not found, it returns 0.
*/
int ft_is_char_in_nstr(char c, char *str)
{
    unsigned int i;
    i = 0;
    while(str[i] != '\0')
    {
        if(c == str[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

char *ft_strndup(char *str, int n)
{
    char *result;
    int result_len;
    result_len = ft_strlen(str);
    if(result_len > n)
    {
        result_len = n;
    }
    result = malloc((result_len + 1) * sizeof(char));
    if(result != NULL)
    {
        int i;
        i = 0;
        while(i < result_len)
        {
            result[i] = str[i];
            i++;
        }
        result[i] = '\0';
    }
    return result;
}

int ft_get_split_size(char *str, char *charset)
{
    int i;
    int result;
    i = 0;
    result = 0;
    while(str[i] != '\0')
    {
        if((!ft_is_char_in_nstr(str[i], charset) && ft_is_char_in_nstr(str[i + 1], charset))
        || (!ft_is_char_in_nstr(str[i], charset) && str[i+1] == '\0'))
        {
            result++;
        }
        i++;
    }
    return result;
}

char **ft_split(char *str, char *charset)
{
    int i;
    int j; 
    char **buffer;
    int start;
    int end;
    buffer = (char **)malloc((ft_get_split_size(str, charset) + 1) * sizeof(char *));
    i = 0;
    j = 0;
    start = 0;
    while(str[i] != '\0')
    {
        if(ft_is_char_in_nstr(str[i], charset) && !ft_is_char_in_nstr(str[i + 1], charset))
        {
            start = i + 1;
        }
        if((!ft_is_char_in_nstr(str[i], charset) && ft_is_char_in_nstr(str[i + 1], charset))
        || (!ft_is_char_in_nstr(str[i], charset) && str[i+1] == '\0'))
        {
            end = i + 1;
            buffer[j] = ft_strndup(&str[start], end - start);
            j++;
        }
        i++;
    }
    return buffer;
}
