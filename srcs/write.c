#include "so_long.h"
#include <unistd.h>

void    ft_putstr(char *str, char *color)
{
    if (!str)
    {
        write(1, color, ft_strlen(color));
        write(1, "(null)", 6);
        write(1, RESET, ft_strlen(RESET));
    }
    write(1, color, ft_strlen(color));
    write(1, str, ft_strlen(str));
    write(1, RESET, ft_strlen(RESET));
}