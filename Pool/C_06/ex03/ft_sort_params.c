/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_sort_params.c                            */
/*                                               */
/*   By: Nemesix493                              */
/*                                               */
/* ********************************************* */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    return s1[i] - s2[i];

}

int main(int argc, char *argv[])
{
    char *current_min, *previous_min;
    previous_min = "\0";
    int i, j;
    i = 1;
    while (i < argc)
    {
        j = 1;
        current_min = argv[j];
        while(j < argc)
        {
            if(ft_strcmp(argv[j], current_min) <= 0 && ft_strcmp(argv[j], previous_min) > 0)
            {
                current_min = argv[j];
            }
            j++;
        }
        write(1, current_min, ft_strlen(current_min));
        write(1, "\n", 1);
        previous_min = current_min;
        i++;
    }
    return 0;
}
