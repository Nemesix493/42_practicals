/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strcpy.c                                 */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}