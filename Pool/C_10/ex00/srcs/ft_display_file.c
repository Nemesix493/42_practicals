/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_display_file.c                              */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>
#include <fcntl.h>

void ft_cannot_open_file(void)
{
    write(2, &"Cannot read file.\n", 19);
}

int ft_read_file(int fd)
{
    char buffer[100];
    ssize_t char_read;
    char_read = 100;
    while (char_read == 100)
    {
        char_read = read(fd, buffer, 100);
        if(char_read >= 0)
        {
            write(1, buffer, (int)char_read);
        }
        else
        {
            ft_cannot_open_file();
            return 1;
        }
    }
    return close(fd);
}

int ft_display_file(char *file_path)
{
    int fd;
    fd = open(file_path, O_RDONLY);
    if(fd < 0)
    {
        ft_cannot_open_file();
        return 1;
    }
    return ft_read_file(fd);
}
