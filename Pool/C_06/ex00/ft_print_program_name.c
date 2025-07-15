/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_print_program_name.c                     */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 0)
    {
        int i;
        i = 0;
        while (argv[0][i] != '\0')
        {
            write(1, &argv[0][i], 1);
            i++;
        }
    }
    return 0;
}
