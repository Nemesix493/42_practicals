/* ********************************************* */
/*                                               */
/*                                               */
/*   program.c                                   */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

#include "../includes/ft_display_file.h"


int main(int argc, char *argv[])
{
    if(argc > 2)
    {
        write(2, &"Too many arguments.\n", 21);
        return 1;
    }
    if(argc < 2)
    {
        write(2, &"File name missing\n", 19);
        return 1;
    }
    return ft_display_file(argv[1]);
}
