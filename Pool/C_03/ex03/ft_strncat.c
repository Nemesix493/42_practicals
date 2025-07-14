/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_strncat.c                                */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i, j;
    i = 0;
    j = 0;
    while (src[j] != '\0' && j < nb)
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