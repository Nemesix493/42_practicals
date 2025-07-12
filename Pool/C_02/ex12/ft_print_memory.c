/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_print_memory.c                           */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

char *ft_byte_to_hex(unsigned int byte, char *str)
{
    char *hex;
    hex = "0123456789abcdef";
    str[0] = hex[(byte % 256) / 16];
    str[1] = hex[byte % 16];
    return str;
}

void ft_print_addr(void *addr)
{
    unsigned int i;
    uintptr_t int_addr;
    char str_addr[16];
    i = 0;
    int_addr = (uintptr_t) addr;
    while(i < 16)
    {
        if(i % 2 == 0)
        {
            ft_byte_to_hex(int_addr % 256, str_addr + 15 - (i + 1));
            int_addr /= 256;
        }
        i++;
    }
    write(1, &str_addr, 16);
}

void ft_print_hex_str(char *str, unsigned int size)
{
    unsigned int i;
    i = 0;
    char hex_char[2];
    while(i < size)
    {
        if(i % 2 == 0)
        {
            write(1, " ", 1);
        }
        write(1, ft_byte_to_hex(str[i], hex_char), 2);

        i++;
    }
}

void ft_putstr_non_printable(char *str, unsigned int size)
{
    unsigned int i;
    i = 0;
    while(i < size)
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            write(1, &str[i], 1);
        }
        else
        {
            write(1, ".", 1);
        }
        i++;
    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i, length;
    i = 0;
    length = 16;
    while(i <= size / 16)
    {
        if(i+1 > size / 16)
        {
            length = (size - i * 16) - 1;
        }
        ft_print_addr(addr + (i * 16));
        write(1, ":", 1);
        ft_print_hex_str(addr + (i * 16), length);
        write(1, " ", 1);
        ft_putstr_non_printable(addr + (i * 16), length);
        write(1, "\n", 1);
        i++;
    }
    return addr;
}
