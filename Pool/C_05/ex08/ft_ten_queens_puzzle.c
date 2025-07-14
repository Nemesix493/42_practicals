/* ********************************************* */
/*                                               */
/*                                               */
/*   ft_ten_queens_puzzle.c                      */
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

int is_cell_free(int row, int col, char *queens)
{
    if(col < 10 && col >=0)
    {
        return queens[row] != (char)('0' + col);
    }
    return 1;
}

char *ft_usable_cols(char *cols, char *queens, unsigned int size)
{
    unsigned int x, y, i, is_usable_col;
    x = 0;
    i = 0;
    while(x < 10)
    {
        y = 0;
        is_usable_col = 1;
        while(y < size)
        {
            is_usable_col = is_usable_col && is_cell_free(y, x, queens);
            is_usable_col = is_usable_col && is_cell_free(y, x + (size - y), queens);
            is_usable_col = is_usable_col && is_cell_free(y, x - (size - y), queens);
            y++;
        }
        if(is_usable_col)
        {
            cols[i] = '0' + x;
            i++;
        }
        x++;
    }
    cols[i] = '\0';
    return cols;
}

int ft_ten_queens_puzzle_recursive(char *queens)
{
    int rows, i, result;
    rows = ft_strlen(queens);
    char usable_cols[11];
    ft_usable_cols(usable_cols, queens, rows);
    i = 0;
    result = 0;
    while(usable_cols[i] != '\0')
    {
        queens[rows] = usable_cols[i];
        if(rows != 9)
        {
            queens[rows+1] = '\0';
            result += ft_ten_queens_puzzle_recursive(queens);
        }
        else
        {
            result++;
            write(1, queens, 11);
        }
        i++;
    }
    queens[rows] = '\0';
    return result;
}

int ft_ten_queens_puzzle(void)
{
    char queens[11] = "";
    queens[10] = '\n';
    return ft_ten_queens_puzzle_recursive(queens);
}
