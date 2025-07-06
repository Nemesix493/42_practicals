/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_print_comb2.c                            */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

void ft_print_comb2()
{
    char comma = ',';
    char space = ' ';
    char number0_digit0;
    char number0_digit1;
    char number1_digit0;
    char number1_digit1;
    
    for(int i = 0; i <= 99; i++)
    {
        for(int j = i + 1; j <= 99; j++)
        {
            number0_digit0 = '0' + i / 10;
            number0_digit1 = '0' + (i % 10);
            number1_digit0 = '0' + j / 10;
            number1_digit1 = '0' + (j % 10);
            write(1, &number0_digit0, 1);
            write(1, &number0_digit1, 1);
            write(1, &space, 1);
            write(1, &number1_digit0, 1);
            write(1, &number1_digit1, 1);
            write(1, &comma, 1);
            write(1, &space, 1);
        }
    }
}