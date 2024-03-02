#include "so_long.h"

int main (int argc, char **argv)
{
    (void)argv;
    if (argc != 2)
    {
        process_error(USAGE_ERROR);
        return (1);
    }
    //ft_putstr(&argv[1][ft_strlen(argv[1]) - 4], GREEN);
    if (!ft_strstr(&argv[1][ft_strlen(argv[1]) - 4], ".ber"))
    {        
        process_error(EXTENSION_ERROR);
        return (2);
    }
    return (0);
}
