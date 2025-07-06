/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_print_combn.c                            */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

void ft_print_combn(int n)
{
    char comma = ',';
    char space = ' ';
    int limit_high = 1;
    for(int i = 0; i < n; i++)
    {
        limit_high *= 10;
    }
    for(int i = 0; i < limit_high; i++)
    {
        int i_buffer = i;
        int is_valid = 1;
        for(int j = 0; j < n-1; j++)
        {
            int digit0 = i_buffer % 10;
            i_buffer /= 10;
            int digit1 = i_buffer % 10;
            is_valid = is_valid && digit0 > digit1;
        }
        if(is_valid)
        {
            int buffer = limit_high;
            int digit_shift;
            char digit;
            for(int j = 0; j < n; j++)
            {
                buffer /= 10;
                digit_shift = (i % (buffer * 10)) / buffer;
                digit = '0' + digit_shift;
                write(1, &digit, 1);
            }
            write(1, &comma, 1);
            write(1, &space, 1);
        }
    }
}