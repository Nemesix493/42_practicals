/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strcat.c                                 */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

char *ft_strcat(char *dest, char *src)
{
    int i, j;
    i = 0;
    j = 0;
    while (src[j] != '\0')
    {
        if(dest[i] == '\0')
        {
            dest[i] = src[j];
            dest[i+1] = '\0';
            j++;
        }
        i++;
    }
    return dest;
}