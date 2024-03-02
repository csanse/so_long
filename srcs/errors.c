#include "so_long.h"

void    process_error(int error)
{
    if (error == USAGE_ERROR)
    {
        ft_putstr ("so_long: error: usage error\n", RED);
        ft_putstr ("Usage: ./so_long <file_map.ber>", YELLOW);
    }
    else if (error == EXTENSION_ERROR)
    {
        ft_putstr ("so_long: error: extension error\n", RED);
        ft_putstr("Usage: ./so_long <file_map.ber>", YELLOW);
    }
}