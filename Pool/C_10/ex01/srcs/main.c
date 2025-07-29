/* ********************************************* */
/*                                               */
/*                                               */
/*   main.c                                      */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

#include "../includes/ft_display_file.h"


int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        write(2, &"File name missing\n", 19);
        return 1;
    }
    int i;
    int is_error;
    i = 1;
    while(i < argc)
    {
        is_error = ft_display_file(argv[1]);
        if(is_error != 0)
        {
            return is_error;
        }
        i++;
    }
    return 0;
}
